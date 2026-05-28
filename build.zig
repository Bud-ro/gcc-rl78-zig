//! Build rl78-elf cross-compiler toolchain (binutils 2.44 + GCC 14.2.0).
//! Uses shared build logic from gcc-cross-zig.
//! SPDX-License-Identifier: GPL-2.0-or-later

const std = @import("std");
const gcc_cross = @import("gcc_cross");

pub fn build(b: *std.Build) void {
    const target = b.standardTargetOptions(.{});
    const optimize = b.standardOptimizeOption(.{});

    const cross_dep = b.dependency("gcc_cross", .{});
    const binutils_src = b.dependency("binutils_src", .{});
    const gcc_src = b.dependency("gcc_src", .{});

    gcc_cross.buildToolchain(b, binutils_src, gcc_src, target, optimize, .{
        .target_triple = "rl78-elf",
        .target_cpu = "rl78",
        .target_canonical = "rl78-unknown-elf",
        .target_os = "elf",
        .target_vendor = "unknown",

        .binutils_version = .{ .major = 2, .minor = 44, .patch = 0 },
        .gcc_version = "14.2.0",
        .gcc_datestamp = "20240801",

        // BFD configuration
        .bfd_default_vector = "rl78_elf32_vec",
        .bfd_select_vectors = &.{ "rl78_elf32_vec", "elf32_le_vec", "elf32_be_vec" },
        .bfd_select_vecs_str = "&rl78_elf32_vec,&elf32_le_vec,&elf32_be_vec",
        .bfd_select_archs_str = "&bfd_rl78_arch",
        .bfd_elf_target_srcs = &.{"elf32-rl78.c"},
        .bfd_cpu_arch_src = "cpu-rl78.c",

        // Opcodes
        .opcodes_target_srcs = &.{ "rl78-dis.c", "rl78-decode.c" },
        .opcodes_arch_flag = "-DARCH_rl78",

        // GAS
        .gas_target_srcs = &.{ "tc-rl78.c", "obj-elf.c", "atof-ieee.c", "rl78-parse.c" },
        .gas_default_arch = "rl78",

        // LD
        .ld_default_emulation = "elf32rl78",
        .ld_emulation_file = b.path("vendor/ld/eelf32rl78.c"),

        // GCC
        .generated_dir = b.path("generated/rl78"),
        .config_dir = b.path("config/rl78"),
        .libcpp_config_dir = b.path("config/libcpp"),
        .libdecnumber_config_dir = b.path("config/libdecnumber"),
        .backtrace_stub = b.path("config/backtrace-stub.cc"),
        .libcody_config = b.path("config/libcody-config.h"),
        .gcc_target_srcs = &.{
            "config/rl78/rl78.cc",
            "config/rl78/rl78-c.cc",
            "config/default-c.cc",
        },

        // Include paths
        .include_dir = b.path("include"),
        .vendor_ld_dir = b.path("vendor/ld"),

        // Tool from gcc-cross-zig
        .find_replace_zig = cross_dep.path("find_replace.zig"),
    });
}
