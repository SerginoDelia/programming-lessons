# Preprocessor

The preprocessor is the very first step in converting C to code that can be ran
by the computer

## Compilation Process

The process of converting source code to machine code in the following step

- Preprocessor
- Compilation
- Assembly
- Linking

## Preprocessor

In the preprocessor step, the compiler looks over all of the code and, before it
does ANYTHING, runs macros on lines in the code that represent preprocessor macros.
some of these macros are the following...

- `#define` - Defines a macro
  
  - Example - `#define PI 3.14`

- `#undef` - Undefines a previously defined macro

  - Example - `#undef PI`

- `#include` - includes a file

  - Example - `#include <stdio.h>`

- `#if` - Conditional compilation directive

  - Exanple - `#if DEBUG`

- #ifndef` - Checks if a macros is not defined

  - Example - `ifndef DEBUG`

- `#elif` - Else if conditon for `#if`

  - Example `#elif DEBUG == 2`

- `#else` - Else condition for `#if`

  - Example `#else`

- `#endif` - Ends a `#if, #ifdef, or #ifndef` block

  - Example `endif`
