# libft

Introduction
------------

Libft is the first project that new cadets are asked to complete at 42. Part of the 42 philosophy is understanding through
recreation. So, rather than use libc and stdlib functions, we recreate them. It's also intended to be continually expanded as 
we attempt more projects. As the library gets expanded this repo will updated to reflect that.

Usage
-----

Clone the repo and use `make all` to create the library. To keep the library and remove the object files, use `make clean`. To
reset the repo to it's previous state entirely use `make fclean`.

Using the library involves several steps. First, you must add `#include "libft.h"` either to your header file, or all files 
which call a libft function. When compiling use the format `gcc <filename.c> <path>/libft.a` to compile successfully.

Functions
---------

Name | Prototype | Library | Purpose | Method | Extra
---- | --------- | ------- | ------- | ------ | -----
ft\_strcat | char	\*ft\_strcat(char \*dest, char \*src); | String.h | Concatenates the string from src to the the string in dest | Iterate through destination string until you find first empty character, and start copying contents of source string starting at the location of the first empty character. Make sure to mark the final character as empty, and return dest. | Make sure not to remalloc dest, will cause an error. Strcat assumes that the destination string has enough memory allocated to handle the total length of the two strings.
ft\_strncat | char	\*ft\_strncat(char \*dest, char \*src, size\_t size); | String.h | Concatenates a "size" number of bytes from the source string to the destination string, if the size > string length, the extra bytes are empty strings. | When copying the source string to the destination string, make sure to keep a count of the number of bytes transferred. | On the off chance that the size is greater than the string length of src, the rest of the memory allocated is filled with empty strings. 