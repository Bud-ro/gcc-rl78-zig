static const char *const multilib_raw[] = {
". !mg10 !mg13 !mg14;",
"g10 mg10 !mg13 !mg14;",
"g13 !mg10 mg13 !mg14;",
"g14 !mg10 !mg13 mg14;",
NULL
};

static const char *const multilib_reuse_raw[] = {
NULL
};

static const char *const multilib_matches_raw[] = {
"mcpu=g10 mg10;",
"mcpu=g13 mg13;",
"mcpu=g14 mg14;",
"mcpu=rl78 mg14;",
"mg10 mg10;",
"mg13 mg13;",
"mg14 mg14;",
NULL
};

static const char *multilib_extra = "";

static const char *const multilib_exclusions_raw[] = {
NULL
};

static const char *multilib_options = "mg10/mg13/mg14";
