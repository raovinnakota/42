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

