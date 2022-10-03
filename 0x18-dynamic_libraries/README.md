## 0x18. C - Dynamic librarie
## About
An introductory project on:
- Dynamic libraries
- `$LD_LIBRARY_PATH` environment variable
- Static vs shared libraries
## Requirements
- Ubuntu 20.04 LTS using gcc
- gcc LTS
## File Descriptions
### Mandatory
**[main.h](main.h)** - header file containing the prototypes of functions from previous projects.

**[libdynamic.so](libdynamic.so)** - dynamic library containing all functions found in [main.h](main.h).

**[1-create_dynamic_lib.sh](1-create_dynamic_lib.sh)** - script that creates a dynamic library called `liball.so` from all `.c` files that are in the current directory.

### Advanced
**[100-operations.so](100-operations.so)** - dynamic library that contains C functions that can be called from Python.

**[101-make_me_win.sh](101-make_me_win.sh)** - Our mole also gave us a piece of documentation.
