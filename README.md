# libft

Introduction
------------

Libft is the first project that new cadets are asked to complete at 42. Part of the 42 philosophy is understanding through recreation. So, rather than use libc and stdlib functions, we recreate them. It's also intended to be continually expanded as we attempt more projects. As the library gets expanded this repo will updated to reflect that.

Creating and Using Libft
----------------------------------

Clone the repository locally. Navigate to yout local copy and run `make all` to create the library (`libft.a`). The make file will also create several object files. To keep the library and remove the object files, use `make clean`. To reset the repository to it's original state, run `make fclean`. To reset and recreate the repository, run `make re`. 

Using a library  involves several steps. First, you must add `#include "libft.h"` either to your header file, or all files which  call a libft function. When compiling, use the format `gcc <filename.c> <path>/libft.a`.

Functions
---------
A full list of the original 50 functions for libft can be found [here](https://cdn.intra.42.fr/pdf/pdf/775/libft.en.pdf)

##Get Next Line
Included in the latest iteration of libft is the function get_next_line. It's useful for reading the contents of text files. More information can be found [here](https://github.com/raovinnakota/get_next_line).

