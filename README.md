# gcc-rl78-zig

Renesas RL78 bare-metal cross-compiler (GCC 14.2.0 + Binutils 2.42), built from source with [Zig](https://ziglang.org/). Shared build logic lives in [gcc-cross-zig](https://github.com/Bud-ro/gcc-cross-zig).

```bash
sudo apt install libgmp-dev libmpfr-dev libmpc-dev   # or: brew install gmp mpfr libmpc
zig build -Doptimize=ReleaseFast
```

Produces `rl78-elf-gcc`, `cc1`, `rl78-elf-as`, `rl78-elf-ld`, `rl78-elf-objcopy`, `rl78-elf-objdump`, `rl78-elf-readelf`, `rl78-elf-ar`, `rl78-elf-nm`, `rl78-elf-strip`, `rl78-elf-size`, `rl78-elf-ranlib`, `rl78-elf-strings`, `rl78-elf-addr2line`, `rl78-elf-c++filt`, `rl78-elf-elfedit` in `zig-out/bin/`.
