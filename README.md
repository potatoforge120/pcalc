# pcalc

A simple command-line calculator.
# about it
 I made it for learning C++ and it's my first real finished project.
 The code is sloppy, but I will do better next time... I hope.

## 🌟 Latest Update (v1.5)
- **Complex Expression Support:** You can now combine standard arithmetic with geometry functions in a single expression (e.g., `10x2+sqr:5`).
- **More Error handling** 
- **Improved Parsing:** enhanced command-line argument handling.
- **Changing the name** changing the name cs theres another program in the same name in some systems

## 🗺️Roadmap
- Adding more functions.
- ~~Support for unlimited arguments in some functions (e.g., `pcalc -pluss 1 2 3 4 5`).~~
- Saving answers and reusing them.
- Making a TUI (Text User Interface).

  

## Installation
To install and compile the program, follow these steps:
```bash
git clone https://github.com/potatoforge120/pcalc.git
cd pcalc
mkdir build 
cd build
cmake ..
make
```

### Optional: Install System-Wide
To make `pcalc` available for all users (installs to `/usr/local/bin` by default):
```bash
sudo make install
```

### Optional: Install for Current User Only
To make `pcalc` available only for your user (installs to `~/.local/bin`):
```bash
cmake -DCMAKE_INSTALL_PREFIX=$HOME/.local ..
make install
```
*Note: Ensure `~/.local/bin` is in your `PATH`.*

## Usage
The `pcalc` program takes a single argument, which can be a flag or a mathematical expression.

### Options:
*   `pcalc -h` or `pcalc --help`: Shows the help message.
*   `pcalc -v`: Shows version information ("pcalc v1.5").

### Math Examples:
You can perform basic arithmetic operations directly:
*   `pcalc 10+5`
*   `pcalc 10x5` (Multiplication)
*   `pcalc 10/2`
*   `pcalc 10-5`

### Geometry Functions:
Geometry functions are integrated into expressions using a `function_name:argument(s)` format:
*   `pcalc sqr:5` (Calculates the square of 5)
*   `pcalc cir:10` (Calculates the area of a circle with radius 10)
*   `pcalc tri:3,4` (Calculates the area of a triangle with base 3, height 4)

### Complex Example:
You can combine operations and functions:
*   `pcalc 10x2+sqr:5`
