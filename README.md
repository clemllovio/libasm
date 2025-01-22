# Libasm
Libasm is a 42 School project that involves rewriting certain libc functions in assembly language (Intel x64 syntax). This project helps to better understand the low-level functioning of commonly used functions.
## Installation
To use this library in your project:
  1. Clone the repository:
     ```bash
      git clone https://github.com/clemllovio/libasm.git
     ```
  2. Navigate to the project directory and compile the library:
     ```bash
     cd libasm
     make
     ```
## Usage
After compiling, you'll have a `libft.a` static library. To use it in your projects:
  1. Include the header in your C files:
     ```c
     #include "libasm.h"
     ```
  2. ou can now use any function from libft in your code. For example:
     ```c
     char *str = "Hello, World!";
     size_t len = ft_strlen(str);
     ft_write(1, str, len);
     ```
## Implemented functions
The following functions have been rewritten in assembly:

  •`ft_strlen`: Calculates the length of a string

  •`ft_strcpy`: Copies a source string to a destination string

  •`ft_strcmp`: Compares two strings

  •`ft_write`: Writes to a file descriptor

  •`ft_read`: Reads from a file descriptor

  •`ft_strdup`: Duplicates a string

Note: Make sure to free any memory allocated by functions like `ft_strdup` to avoid memory leaks.

## Credits
This project was developed by Clémence Llovio as part of the curriculum at 42 School.
