# Libft - Custom C Library

This repository contains the implementation of the **libft** project, a custom C library that provides essential functions for working with strings, memory management, and linked lists. The project is designed to help understand and reimplement common functions from the standard C library.

---

## Standard Library Functions (Part 1)

### 01. `ft_isalpha`
- **Prototype:** `int ft_isalpha(int c);`
- **Description:** Checks if a given character is an alphabetic letter (`A-Z` or `a-z`).
- **Return Value:** `1` if the character is alphabetic, `0` otherwise.

### 02. `ft_isdigit`
- **Prototype:** `int ft_isdigit(int c);`
- **Description:** Checks if a given character is a digit (`0-9`).
- **Return Value:** `1` if the character is a digit, `0` otherwise.

### 03. `ft_isalnum`
- **Prototype:** `int ft_isalnum(int c);`
- **Description:** Checks if a given character is alphanumeric (either a letter or a digit).
- **Return Value:** `1` if true, `0` otherwise.

### 04. `ft_isascii`
- **Prototype:** `int ft_isascii(int c);`
- **Description:** Checks if a given character is part of the ASCII table (`0-127`).
- **Return Value:** `1` if true, `0` otherwise.

### 05. `ft_isprint`
- **Prototype:** `int ft_isprint(int c);`
- **Description:** Checks if a given character is printable (from `32` to `126` in ASCII).
- **Return Value:** `1` if true, `0` otherwise.

### 06. `ft_strlen`
- **Prototype:** `size_t ft_strlen(const char *s);`
- **Description:** Computes the length of a given string.
- **Return Value:** The length of the string (excluding the null terminator).

### 07. `ft_memset`
- **Prototype:** `void *ft_memset(void *b, int c, size_t len);`
- **Description:** Fills the first `len` bytes of memory with the specified byte `c`.
- **Return Value:** A pointer to the modified memory.

### 08. `ft_bzero`
- **Prototype:** `void ft_bzero(void *s, size_t n);`
- **Description:** Sets the first `n` bytes of the memory area pointed to by `s` to zero.
- **Return Value:** None.

### 09. `ft_memcpy`
- **Prototype:** `void *ft_memcpy(void *dst, const void *src, size_t n);`
- **Description:** Copies `n` bytes from source to destination.
- **Return Value:** A pointer to the destination.

### 10. `ft_memmove`
- **Prototype:** `void *ft_memmove(void *dst, const void *src, size_t len);`
- **Description:** Similar to `memcpy` but handles overlapping memory regions safely.
- **Return Value:** A pointer to the destination.

### 11. `ft_strlcpy`
- **Prototype:** `size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);`
- **Description:** Copies a string into `dst`, ensuring null-termination and preventing buffer overflows.
- **Return Value:** The length of `src`.

### 12. `ft_strlcat`
- **Prototype:** `size_t ft_strlcat(char *dst, const char *src, size_t dstsize);`
- **Description:** Concatenates `src` to `dst`, ensuring null-termination and preventing buffer overflows.
- **Return Value:** The total length of the string it tried to create.

### 13. `ft_toupper`
- **Prototype:** `int ft_toupper(int c);`
- **Description:** Converts a lowercase letter to uppercase.
- **Return Value:** The uppercase character, or `c` if it is not lowercase.

### 14. `ft_tolower`
- **Prototype:** `int ft_tolower(int c);`
- **Description:** Converts an uppercase letter to lowercase.
- **Return Value:** The lowercase character, or `c` if it is not uppercase.

### 15. `ft_strchr`
- **Prototype:** `char *ft_strchr(const char *s, int c);`
- **Description:** Finds the first occurrence of `c` in `s`.
- **Return Value:** A pointer to the found character, or `NULL` if not found.

### 16. `ft_strrchr`
- **Prototype:** `char *ft_strrchr(const char *s, int c);`
- **Description:** Finds the last occurrence of `c` in `s`.
- **Return Value:** A pointer to the found character, or `NULL` if not found.

### 17. `ft_strncmp`
- **Prototype:** `int ft_strncmp(const char *s1, const char *s2, size_t n);`
- **Description:** Compares up to `n` characters of `s1` and `s2`.
- **Return Value:** `0` if equal, positive or negative value if different.

### 18. `ft_memchr`
- **Prototype:** `void *ft_memchr(const void *s, int c, size_t n);`
- **Description:** Searches for `c` in the first `n` bytes of `s`.
- **Return Value:** A pointer to the byte found, or `NULL`.

### 19. `ft_memcmp`
- **Prototype:** `int ft_memcmp(const void *s1, const void *s2, size_t n);`
- **Description:** Compares `n` bytes of `s1` and `s2`.
- **Return Value:** `0` if equal, positive or negative value if different.

### 20. `ft_strnstr`
- **Prototype:** `char *ft_strnstr(const char *haystack, const char *needle, size_t len);`
- **Description:** Searches for `needle` in `haystack` within `len` characters.
- **Return Value:** A pointer to the first occurrence, or `NULL`.

### 21. `ft_atoi`
- **Prototype:** `int ft_atoi(const char *str);`
- **Description:** Converts a string to an integer.
- **Return Value:** The converted integer.

### 22. `ft_calloc`
- **Prototype:** `void *ft_calloc(size_t count, size_t size);`
- **Description:** Allocates memory and sets it to zero.
- **Return Value:** A pointer to the allocated memory.

### 23. `ft_strdup`
- **Prototype:** `char *ft_strdup(const char *s1);`
- **Description:** Allocates and duplicates a string.
- **Return Value:** A pointer to the duplicated string.

---

## Additional Functions (Part 2)

### `ft_substr`
- Extracts a substring from a string.

### `ft_strjoin`
- Concatenates two strings into a new dynamically allocated string.

### `ft_strtrim`
- Trims leading and trailing characters from a string.

### `ft_split`
- Splits a string into an array of words based on a delimiter.

### `ft_itoa`
- Converts an integer to a string.

### `ft_strmapi`
- Applies a function to each character of a string.

### `ft_striteri`
- Applies a function to each character of a string, modifying it in place.

---

## How to Use

COMANDOS
	make :		genera archivos .o
	make fclean:	limpia archivos .o
