CMake notes
===========

- Syntax:

```
command(KEYWORD value)
# comment

# e.g.
cmake_minimum_required(VERSION 3.8)
```

- Generating build files and building
- with a build/ subdir in the project root

```
cmake -S . -B build
cmake --build build
```

- Adding dependencies. Pattern:

```
add_library(foo OBJECT foo.c foo.h)
# libraries can be SHARED, STATIC, MODULE or OBJECT (3.1+)
# since 3.12, object libraries 

add_executable(target)
target_link_libraries(target PRIVATE foo)
# link libraries can be PUBLIC, PRIVATE or INTERFACE
```

- Build flags are declared with the syntax target_xyz
