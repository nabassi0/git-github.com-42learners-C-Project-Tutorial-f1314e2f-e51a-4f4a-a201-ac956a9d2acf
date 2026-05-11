*This activity has been created as part of the 42 curriculum by nabassi.*

# libft

## Description

`libft` is the first project of the 42 curriculum. The goal is to re-implement a set of standard C library functions from scratch, understand how they work internally, and build a personal static library (`libft.a`) that will be reused throughout the entire 42 curriculum.

The library is divided into three parts:
- **Part 1**: Re-implementations of standard libc functions (`memset`, `strlen`, `atoi`, etc.)
- **Part 2**: Additional utility functions not present in libc or implemented differently (`ft_split`, `ft_itoa`, `ft_substr`, etc.)
- **Part 3**: Linked list manipulation functions using the `t_list` structure

## Instructions

### Compilation

```bash
make        # Build libft.a
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Rebuild from scratch
```

### Usage

Include the header in your source file and link the library at compilation:

```c
#include "libft.h"
```

```bash
gcc main.c -L. -lft -o my_program
```

## Library Description

### Part 1 — Libc functions

| Function | Description |
|---|---|
| `ft_isalpha` | Returns 1 if the character is alphabetic, 0 otherwise |
| `ft_isdigit` | Returns 1 if the character is a decimal digit, 0 otherwise |
| `ft_isalnum` | Returns 1 if the character is alphanumeric, 0 otherwise |
| `ft_isascii` | Returns 1 if the character is a valid ASCII character, 0 otherwise |
| `ft_isprint` | Returns 1 if the character is printable, 0 otherwise |
| `ft_strlen` | Returns the length of a string |
| `ft_memset` | Fills a memory area with a given byte value |
| `ft_bzero` | Sets a memory area to zero |
| `ft_memcpy` | Copies n bytes from src to dest (no overlap) |
| `ft_memmove` | Copies n bytes from src to dest (handles overlap) |
| `ft_strlcpy` | Copies a string into a fixed-size buffer, returns length of src |
| `ft_strlcat` | Appends a string to a fixed-size buffer, returns total intended length |
| `ft_toupper` | Converts a lowercase letter to uppercase |
| `ft_tolower` | Converts an uppercase letter to lowercase |
| `ft_strchr` | Returns a pointer to the first occurrence of a character in a string |
| `ft_strrchr` | Returns a pointer to the last occurrence of a character in a string |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_memchr` | Searches for a byte in a memory area |
| `ft_memcmp` | Compares two memory areas |
| `ft_strnstr` | Locates a substring in a string, within n characters |
| `ft_atoi` | Converts a string to an integer |
| `ft_calloc` | Allocates memory for an array and initializes it to zero |
| `ft_strdup` | Duplicates a string using malloc |

### Part 2 — Additional functions

| Function | Description |
|---|---|
| `ft_substr` | Allocates and returns a substring from a string |
| `ft_strjoin` | Allocates and concatenates two strings into a new string |
| `ft_strtrim` | Allocates a copy of a string with characters from a set trimmed at both ends |
| `ft_split` | Allocates and splits a string by a delimiter into a NULL-terminated array |
| `ft_itoa` | Allocates and converts an integer to its string representation |
| `ft_strmapi` | Applies a function to each character of a string and returns the resulting new string |
| `ft_striteri` | Applies a function to each character of a string, modifying it in place |
| `ft_putchar_fd` | Outputs a character to the given file descriptor |
| `ft_putstr_fd` | Outputs a string to the given file descriptor |
| `ft_putendl_fd` | Outputs a string followed by a newline to the given file descriptor |
| `ft_putnbr_fd` | Outputs an integer to the given file descriptor |

### Part 3 — Linked list functions

The linked list functions use the following structure defined in `libft.h`:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Allocates and returns a new node with the given content |
| `ft_lstadd_front` | Adds a node at the beginning of the list |
| `ft_lstsize` | Returns the number of nodes in the list |
| `ft_lstlast` | Returns the last node of the list |
| `ft_lstadd_back` | Adds a node at the end of the list |
| `ft_lstdelone` | Frees a node's content using `del` and frees the node itself |
| `ft_lstclear` | Deletes and frees a node and all its successors, sets the pointer to NULL |
| `ft_lstiter` | Applies a function to the content of each node |
| `ft_lstmap` | Applies a function to each node's content and builds a new list from the results |

## Resources

### References

- [C man pages](https://man7.org/linux/man-pages/) — official documentation for all libc functions reimplemented in this project
- [42 Norm](https://github.com/42School/norminette) — coding standard enforced at 42
- [GNU C Library reference](https://www.gnu.org/software/libc/manual/) — detailed libc documentation

### AI usage

Claude (Anthropic) was used during this project for the following tasks:
- Debugging logical errors in several functions (`ft_lstlast`, `ft_memmove`, `ft_strtrim`, `ft_strlcpy`, `ft_calloc`)
- Identifying potential memory leaks and overflow issues (notably in `ft_calloc` and `ft_split`)
- Getting advice on reducing function length to comply with the 42 Norm (25-line limit per function)
- Reviewing the README structure against the subject requirements
