This project has been created as part of the 42 curriculum by <thsi>.

Libft
Description

Libft is a custom C library that reimplements a set of standard libc functions (prefixed with ft_) along with several additional utility functions for string manipulation, memory handling, and singly linked lists.

The goal of this project is to understand how commonly used C standard library functions work internally by rebuilding them from scratch, and to assemble a personal toolkit of functions that will be reused throughout the rest of the 42 curriculum.

The library is compiled into a static archive, libft.a, using the ar command.

Library Overview

The library is organized into three parts:

Part 1 — Libc function reimplementations

Recreates the prototypes and behavior of standard libc functions: ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_strlen, ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_strlcpy, ft_strlcat, ft_toupper, ft_tolower, ft_strchr, ft_strrchr, ft_strncmp, ft_memchr, ft_memcmp, ft_strnstr, ft_atoi, ft_calloc, ft_strdup.

Part 2 — Additional functions

Utility functions not found in libc, or found in a different form: ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_itoa, ft_strmapi, ft_striteri, ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd.

Part 3 — Linked lists

Functions to create and manipulate a singly linked list (t_list): ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap.

Instructions
Compilation
bash
make        # builds libft.a
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # rebuilds everything from scratch
Usage in another project

Copy the libft folder into your project, then in your project's Makefile:

makefile
LIBFT_DIR = ./libft
LIBFT     = $(LIBFT_DIR)/libft.a

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

your_program: $(LIBFT) other_objects.o
	$(CC) other_objects.o -L$(LIBFT_DIR) -lft -o your_program

And include the header in your source files:

c
#include "libft.h"
Resources
C library — man7.org — man pages for the original libc functions being reimplemented
42's Norm documentation — coding style rules enforced on this project
BSD <string.h> — reference for strlcpy/strlcat/bzero, which are BSD-originated and not in glibc by default
Kernighan & Ritchie, The C Programming Language (2nd ed.) — classic reference for pointers, memory, and string handling in C
Valgrind documentation — used to check for memory leaks and invalid memory access while testing the library

AI Usage
AI assistance was taken to draft this README file and for conceptual understanding of certain functions. Source codes, Makefile and functions were written independently without AI usage.
 