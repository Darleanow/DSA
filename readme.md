# DSA

## Project Structure

This project contains multiple subfolders, each representing a specific task or exercise. Here’s an overview:

- **`main.c`**: Currently empty, intended for debugging and integrating individual tasks as needed.
- **`tpX` Folders**: Each exercise (e.g., `tp0`) has its own folder containing:
  - **`.c` and `.h` files**: The main source code and headers for each task (e.g., `helper_base_tpX.c`, `helper_base_tpX.h` in `tp0`).
  - **Execution Guide (`exec.md`)**: The summary of the tests done to ensure each implemented function is working.

## Build Instructions

To build and run the project, you can use CMake with the Ninja build system. Follow these steps:

### 1. Generate Build Files

```shell
cmake -DCMAKE_BUILD_TYPE=Debug -G Ninja -S . -B cmake-build-debug
```

### 2. Build the Project

```shell
cmake --build cmake-build-debug --target Algorithmie -j 30
```

This command compiles all tasks in their respective folders, preparing them for debugging or integration into `main.c`.

### 3. Run Executable

```shell
./cmake-build-debug/Algorithmie
```

Currently, `main.c` is empty, so this command will not produce any output. To test specific functions, add function calls in `main.c` as needed.

---

## Run Code for Each `tpX`

Each `tpX` folder contains its own functions and tests. Here’s how to run code for specific exercises by including them in `main.c`:

### 1. **Add Function Calls in `main.c`**

- Open `main.c` and include the respective headers for the `tpX` folder you want to test
- For example, to test `tp0` functions, add:

     ```c
     #include "tp0/helper_base_tp0.h"

     int main() {
         // Call tp0 functions here, e.g. tp0.function_name(param1, param2);
         return 0;
     }
     ```

### 2. **Run Code for Specific Tasks**

After adding function calls in `main.c`, build and run the project as follows:

```shell
cmake --build cmake-build-debug --target Algorithmie -j 30
./cmake-build-debug/Algorithmie
```

### Example of Running Code for Each `tp`

1. **Running `tp0` Functions**:
   - Include `#include "tp0/helper_base_tp0.h"` in `main.c`
   - Add test code in `main()` for functions like `sum_elements_in_array` or `factorial`

2. **Running `tpx` Functions**:
   - Include `#include "tpx/helper_base_tpx.h"` in `main.c`

> code examples are provided in each tp folder readme

Each `tpX` folder can be tested in isolation or in combination by adding the corresponding function calls in `main.c`
Adjust the function calls as needed to test specific parts of the codebase for debugging or validation
