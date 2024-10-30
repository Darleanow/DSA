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
