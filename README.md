*This project has been created as part of the 42 curriculum by busyigit.*

# Libft - Your Very First C Library

## 🗣️ Description

The **Libft** project is a foundational milestone in the 42 curriculum. It requires students to create a custom C library from scratch by re-implementing standard functions from the `libc` and developing additional utility tools. In a language as low-level as C, these tools are essential for subsequent projects.

The core goal of this project is to master **manual memory management**, understand the internal logic of data manipulation, and adhere to strict coding standards (The Norm). By completing this library, I have built a versatile toolkit that I will maintain and use throughout my journey at 42.

## 📚 Library Overview

The library is a collection of functions that can be categorized into three main segments. Each segment focuses on a different aspect of C programming:

### 1. Re-implementation of Libc Functions
These functions mirror the behavior of their standard counterparts. Coding them from scratch provides insight into pointer arithmetic and memory buffer handling.



| Function | Description |
|----------|-------------|
| `ft_isalpha` | Checks if a character is alphabetic |
| `ft_isdigit` | Checks if a character is a digit |
| `ft_isalnum` | Checks if a character is alphanumeric |
| `ft_isascii` | Checks if a character is an ASCII character |
| `ft_isprint` | Checks if a character is printable |
| `ft_strlen` | Calculates the length of a string |
| `ft_memset` | Fills memory with a constant byte |
| `ft_bzero` | Sets all bytes in a memory area to zero |
| `ft_memcpy` | Copies memory area (non-overlapping) |
| `ft_memmove` | Copies memory area (handles overlapping safely) |
| `ft_strlcpy` | Size-bounded string copying |
| `ft_strlcat` | Size-bounded string concatenation |
| `ft_toupper` | Converts character to uppercase |
| `ft_tolower` | Converts character to lowercase |
| `ft_strchr` | Locates first occurrence of character in string |
| `ft_strrchr` | Locates last occurrence of character in string |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_memchr` | Locates byte in memory area |
| `ft_memcmp` | Compares memory areas |
| `ft_strnstr` | Locates substring in string with length limit |
| `ft_atoi` | Converts string to integer |
| `ft_calloc` | Allocates and zeros memory |
| `ft_strdup` | Duplicates a string using malloc |

### 2. Additional Utility Functions
These are functions not found in the standard library or implemented with specific 42-required behaviors, focusing on string slicing and file descriptor output.

| Function | Description |
|----------|-------------|
| `ft_substr` | Extracts a substring from a string |
| `ft_strjoin` | Concatenates two strings into a new one |
| `ft_strtrim` | Trims specified characters from beginning and end |
| `ft_split` | Splits a string by a delimiter into an array of strings |
| `ft_itoa` | Converts an integer to a string (ASCII) |
| `ft_strmapi` | Applies a function to each character with a new string return |
| `ft_striteri` | Applies a function to each character by reference |
| `ft_putchar_fd` | Outputs a character to a specific file descriptor |
| `ft_putstr_fd` | Outputs a string to a specific file descriptor |
| `ft_putendl_fd` | Outputs a string with a newline to a file descriptor |
| `ft_putnbr_fd` | Outputs an integer to a file descriptor |

### 3. Linked List Functions (Bonus)
This segment introduces dynamic data structures. It uses a custom `t_list` structure to manage nodes, allowing for flexible data storage where memory is not necessarily contiguous.

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;
```

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the beginning of the list |
| `ft_lstsize` | Counts the number of nodes in the list |
| `ft_lstlast` | Returns the last node of the list |
| `ft_lstadd_back` | Adds a node at the end of the list |
| `ft_lstdelone` | Deletes a single node |
| `ft_lstclear` | Deletes and frees all nodes |
| `ft_lstiter` | Applies a function to each node's content |
| `ft_lstmap` | Creates a new list by applying a function to each node |

## Instructions

### Requirements

- GCC compiler
- Make
- Unix-based operating system (Linux/macOS)

### Compilation and Make Commands

| Command | Description |
|---------|-------------|
| `make` or `make all` | Compiles the library and creates libft.a |
| `make clean` | Removes object files |
| `make fclean` | Removes object files and the library |
| `make re` | Performs a full re-compilation from scratch |

### Usage

To integrate libft into your own project:

1. Include the header file in your code:
   ```c
   #include "libft.h"
   ```

2. Compile your project while linking the library:
   ```bash
   cc -Wall -Wextra -Werror your_program.c libft.a -o program
   ```

## Resources

### Documentation & References
- 42 Cursus Libft Subject - for official project documentation details
- [bilgigunlugum.net - C Programming](https://bilgigunlugum.net/prog/cprog/c_proggiris) - Details and function prototypes
- [man7.org](https://man7.org/linux/man-pages/) - Linux manual pages


### AI Usage

Throughout this project, **I** utilized AI tools to supplement my learning journey. My methodology was to treat AI as a senior consultant—using it to clarify complex edge cases that are often overlooked in standard documentation.

**How AI was utilized:**
- **Memory Management:** Breaking down the logic of `malloc` and `free` in complex functions like `ft_split` to prevent memory leaks.
- **Boundary Testing:** Brainstorming boundary conditions and edge cases for string manipulation functions (e.g., `ft_strlcat` overflow logic).
- **Technical Writing:** Refining the technical descriptions and structure within this README file.

All logic in this repository is original. I prioritized the "learning by doing" philosophy, ensuring that no code was generated or pasted. This approach allowed me to internalize the core **C** concepts necessary for future cursus milestones.

---
