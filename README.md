# libft

A custom C library implementing standard functions from libc, along with additional utility functions.

## Description

`libft` is the first project at 42. The goal is to re-implement a set of standard C library functions, gain a deep understanding of how they work, and build a personal library to reuse throughout the curriculum.

## Compilation

```bash
make        # Build libft.a
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Rebuild from scratch
make bonus  # Build with bonus (linked list) functions
```

## Functions

### Part 1 — Libc functions

| Function | Description |
|---|---|
| `ft_isalpha` | Returns non-zero if the character is alphabetic |
| `ft_isdigit` | Returns non-zero if the character is a decimal digit |
| `ft_isalnum` | Returns non-zero if the character is alphanumeric |
| `ft_isascii` | Returns non-zero if the character is a valid ASCII character |
| `ft_isprint` | Returns non-zero if the character is printable |
| `ft_strlen` | Returns the length of a string |
| `ft_memset` | Fills a memory area with a given byte value |
| `ft_bzero` | Sets a memory area to zero |
| `ft_memcpy` | Copies n bytes from src to dest (no overlap) |
| `ft_memmove` | Copies n bytes from src to dest (handles overlap) |
| `ft_strlcpy` | Copies a string into a fixed-size buffer |
| `ft_strlcat` | Appends a string to a fixed-size buffer |
| `ft_toupper` | Converts a lowercase letter to uppercase |
| `ft_tolower` | Converts an uppercase letter to lowercase |
| `ft_strchr` | Returns a pointer to the first occurrence of a character in a string |
| `ft_strrchr` | Returns a pointer to the last occurrence of a character in a string |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_memchr` | Searches for a byte in a memory area |
| `ft_memcmp` | Compares two memory areas |
| `ft_strnstr` | Locates a substring in a string, within n characters |
| `ft_atoi` | Converts a string to an integer |
| `ft_calloc` | Allocates memory and initializes it to zero |
| `ft_strdup` | Duplicates a string using malloc |

### Part 2 — Additional functions

| Function | Description |
|---|---|
| `ft_substr` | Returns a substring from a string |
| `ft_strjoin` | Concatenates two strings into a new string |
| `ft_strtrim` | Trims characters from both ends of a string |
| `ft_split` | Splits a string by a delimiter into an array of strings |
| `ft_itoa` | Converts an integer to a string |
| `ft_strmapi` | Applies a function to each character of a string, returning a new string |
| `ft_striteri` | Applies a function to each character of a string in-place |
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | Writes an integer to a file descriptor |

### Bonus — Linked list functions

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the beginning of a list |
| `ft_lstsize` | Returns the number of nodes in a list |
| `ft_lstlast` | Returns the last node of a list |
| `ft_lstadd_back` | Adds a node at the end of a list |
| `ft_lstdelone` | Deletes a single node using a given function |
| `ft_lstclear` | Deletes and frees a list and all its nodes |
| `ft_lstiter` | Applies a function to the content of each node |
| `ft_lstmap` | Applies a function to each node and builds a new list from the results |

## Usage

Include the header and link the library:

```c
#include "libft.h"
```

```bash
gcc main.c -L. -lft -o my_program
```

## Author

nabassi
