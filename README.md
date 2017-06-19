# libft

Introduction
------------

Libft is the first projects that new cadets are asked to complete at 42. Part of the 42 philosophy is understanding through
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
ft\_strcat | char	\*ft\_strcat(char \*dest, char \*src); | string.h | 
Concatenates the string from src to the the string in dest | Iterate through destination string until you find first empty character, and start copying contents of source string starting at the location of the first empty character. Make sure to mark the final character as empty, and return dest. | Make sure not to remalloc dest, will cause an error. Strcat assumes that the destination string has enough memory allocated to handle the total length of the two strings.
