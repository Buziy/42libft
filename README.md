This project has been created as part of the 42 curriculum by busyigit.

# Libft

## Description

### Project Context
As the inaugural project of the 42 curriculum, **Libft** serves as a rite of passage into low-level programming. The core mission is to build a personal C library from the ground up, mimicking the behavior of the standard `libc`. By coding these functions manually, I have gained an intimate understanding of how data is stored, moved, and transformed in memory.

### Objectives
This project is designed to instill a rigorous approach to software development, focusing on:

* **Deep Memory Control:** Managing the heap and stack using `malloc` and `free` without leaks.
* **Low-Level Manipulation:** Mastering pointer arithmetic to traverse arrays and strings.
* **Robustness:** Handling edge cases, such as NULL pointers or memory allocation failures, with grace.
* **The 42 Norm:** Adhering to a strict coding standard that promotes clarity and consistency.



### Scope & Evolution
The library encompasses essential tools for daily C programming:

* **Standard Logic:** Reimplementing core functions like `ft_strlen`, `ft_memset`, and `ft_atoi`.
* **String Engineering:** Creating complex utilities for splitting (`ft_split`) and joining strings.
* **Dynamic Structures:** The bonus section introduces **Singly Linked Lists**, a fundamental step toward building more complex data structures.

This library is not a one-off assignment; it is a living tool that will be integrated into nearly every subsequent project in the 42 pedagogy.

---

## Detailed Library Overview
The `libft.a` library is organized into three distinct layers of functionality:

### 1. The Standard Reimplementations
This section focuses on the behavior of functions found in `<string.h>`, `<ctype.h>`, and `<stdlib.h>`.

* **Goal:** To achieve bit-for-bit compatibility with original system functions.
* **Challenge:** Implementing functions like `ft_strlcpy` and `ft_strnstr` which require careful boundary checking to prevent buffer overflows.

### 2. Custom Utility Functions
These functions extend the standard library's capabilities, focusing on developer productivity:

* **Transformation:** `ft_itoa` converts integers to strings, requiring precise memory calculation.
* **Functional Programming:** `ft_strmapi` and `ft_striteri` allow applying functions across string elements using function pointers.
* **I/O Helpers:** A suite of `ft_put` functions to handle output to various file descriptors.

### 3. Linked List API (Bonus)
Using the `t_list` structure, the library provides a full API for dynamic data management.



* **Management:** Adding nodes to the front (`ft_lstadd_front`) or back (`ft_lstadd_back`).
* **Maintenance:** Safe deletion of nodes and entire lists (`ft_lstdelone`, `ft_lstclear`) using provided deletion functions.

---

