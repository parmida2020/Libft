*This project has been created as part of the 42 curriculum by ppourraj.*

# Libft

## Description

Libft is a custom C library developed as part of the 42 curriculum.  
The objective of this project is to recreate a collection of standard C library functions, as well as implement additional utility functions that will be reused throughout future 42 projects.

This project focuses on fundamental programming concepts such as:
- Memory management
- String manipulation
- Pointer arithmetic
- Dynamic allocation
- Data structures
- Linked lists
- Defensive programming in C

Libft serves as a foundational library that can be integrated into future projects to simplify development and encourage code reusability.

---

# Features

## Libc Functions

Reimplemented standard C library functions such as:

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_strlen`
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_toupper`
- `ft_tolower`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_memchr`
- `ft_memcmp`
- `ft_atoi`
- `ft_calloc`
- `ft_strdup`

---

## Additional Functions

Additional utility functions implemented from scratch:

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

---

## Linked List Functions

Implemented a custom singly linked list structure and related utility functions:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
````

Functions include:

* `ft_lstnew`
* `ft_lstadd_front`
* `ft_lstsize`
* `ft_lstlast`
* `ft_lstadd_back`
* `ft_lstdelone`
* `ft_lstclear`
* `ft_lstiter`
* `ft_lstmap`

---

# Instructions

## Cloning the Repository

```bash
git clone https://github.com/yourusername/libft.git
cd libft
```

---

## Compilation

Compile the library using:

```bash
make
```

This will generate the static library:

```bash
libft.a
```

---

## Available Makefile Rules

```bash
make        # Compile the library
make clean  # Remove object files
make fclean # Remove object files and library
make re     # Recompile everything
```

---

# Technical Choices

Some implementation details and considerations:

* All functions were written following the 42 Norm.
* Dynamic memory allocation was carefully managed to avoid memory leaks.
* Edge cases such as NULL pointers, empty strings, and allocation failures were handled whenever necessary.
* Helper functions were used to improve modularity and readability.
* Linked list utilities were implemented using singly linked lists.

---

# What I Learned

Through this project, I strengthened my understanding of:

* Low-level memory operations
* Pointer manipulation
* String handling in C
* Static libraries
* Dynamic memory allocation
* Linked list structures
* Debugging segmentation faults and undefined behavior
* Writing cleaner and more maintainable code

---

# Resources

## Documentation

* The Open Group Base Specifications
  [https://pubs.opengroup.org/](https://pubs.opengroup.org/)

* Linux Manual Pages
  [https://man7.org/linux/man-pages/](https://man7.org/linux/man-pages/)

* GNU C Library Documentation
  [https://www.gnu.org/software/libc/manual/](https://www.gnu.org/software/libc/manual/)

---

## Tutorials & References

* Learn C
  [https://www.learn-c.org/](https://www.learn-c.org/)

* GeeksforGeeks — Linked Lists in C
  [https://www.geeksforgeeks.org/linked-list-set-1-introduction/](https://www.geeksforgeeks.org/linked-list-set-1-introduction/)

* 42 subject PDF and intra resources

---

## AI Usage

AI tools were used as supplementary learning resources during the development of this project.

They were mainly used for:

* Understanding theoretical concepts
* Clarifying function behavior
* Reviewing edge cases
* Debugging issues such as segmentation faults and memory errors
* Improving understanding of linked lists and memory management

---

# Author

42 Lisboa Student — ppourraj