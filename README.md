# libft

Introduction
------------

Libft is the first project that new cadets are asked to complete at 42. Part of the 42 philosophy is understanding through recreation. So, rather than use libc and stdlib functions, we recreate them. It's also intended to be continually expanded as we attempt more projects. As the library gets expanded this repo will updated to reflect that.

Usage
-----

Clone the repo and use `make all` to create the library. To keep the library and remove the object files, use `make clean`. To reset the repo to it's previous state entirely use `make fclean`.

Using the library involves several steps. First, you must add `#include "libft.h"` either to your header file, or all files which call a libft function. When compiling use the format `gcc <filename.c> <path>/libft.a` to compile successfully.

Functions
---------

Name | Prototype | Library/Header | Purpose
---- | --------- | -------------- | ------- 
`ft_strlen` | `size_t    ft_strlen(char *str);` | `libc/string.h` | Returns an unsigned integer that contains the size of a string | Iterate through the string and increment a counter. Return the counter, will need to include `string.h` to use `size_t`
`ft_strcpy` | `char *ft_strcpy(char *dest, const char *src);` | `libc/string.h` | Copies the entirety of src, including the null-terminating byte to the buffer pointed to by dest. The buffer should have the correct amount of memory allocated
`ft_strdup` | `char ft_strdup(const char *str);` | `libc/string.h` |Allocates enough memory to hold the input string, and copies the contents of input string to newly allocated string. Returns the allocated string.
`ft_strcat` | `char *ft_strcat(char *dest, char *src);` | `libc/string.h` | Copies the contents of the source string to the destination string, starting at the first instance of a null terminated byte. Assumes that the destination string has enough memory allocated to hold the source string.
`ft_strncat` | `char *ft_strncat(char *dest, char *src, size_t size);` | `libc/string.h` | Concatenates a finite number of bytes, determined by the input size from the source string to the destination string. If the size > string length, the extra bytes are filled with `'\0'` bytes. 
