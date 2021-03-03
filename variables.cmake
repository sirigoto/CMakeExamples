# run with cmake -P
set(MY_VARIABLE "A Variable")
message(${MY_VARIABLE})

set(CACHED_VAR "Cached" CACHE STRING "foo")
message(STATUS "${CACHED_VAR}")
