This project has been created as part of the 42 curriculum by nkilosan

Description

libft is the first project of cursus 42, it is a custom C library created by implmenting the standard C functions from the scratch. 
It includes string manipulation, memory management, and linked list operations, offering a set of tools that can be reused in future projects.

Functions Overview

String Functions:

1. ft_atoi: Converts a string to an integer.

2. ft_itoa: Converts an integer to a string.

3. ft_strdup: Duplicates a string.

4. ft_strchr: Finds the first occurrence of a character in a string.

5. ft_strrchr: Finds the last occurrence of a character in a string.

6. ft_strncmp: Compares two strings up to n characters.

7. ft_strnstr: Locates the first occurrence of a substring in a string.

8. ft_strlen: Returns the length of a string (excluding the null terminator).

9. ft_strmapi: Applies a function to each character of a string to create a new string.

10. ft_striteri: Applies a function to each character of a string, modifying the string in place.

11. ft_strjoin: Concatenates two strings.

12. ft_strtrim: Trims characters from the start and end of a string.

13. ft_substr: Extracts a substring from a string.

14. ft_strlcat: Concatenates two strings with size limit.

15. ft_strlcpy: Copies a string with size limit.

16. ft_tolower: Converts a character to lowercase.

17. ft_toupper: Converts a character to uppercase.

Memory Functions:

18. ft_memset: Fills memory with a specific value.

19. ft_bzero: Sets a memory area to zero.

20. ft_memcpy: Copies memory from one location to another.

21. ft_memmove: Safely copies memory with overlap.

22. ft_memchr: Locates a character in a block of memory.

23. ft_memcmp: Compares two memory blocks.

24. ft_calloc: Allocates memory and initializes it to zero.

25. ft_malloc: Allocates memory without initialization.

Linked List Functions:

26. ft_lstnew: Creates a new linked list node.

27. ft_lstadd_front: Adds a node at the front of the list.

28. ft_lstadd_back: Adds a node at the end of the list.

29. ft_lstsize: Returns the number of nodes in the list.

30. ft_lstlast: Returns the last node in the list.

31. ft_lstiter: Iterates over the list and applies a function to each node.

32. ft_lstmap: Applies a function to each node and creates a new list.

33. ft_lstdelone: Deletes a node and frees its content.

34. ft_lstclear: Clears the entire list and frees all nodes.

Output Functions:

35. ft_putchar_fd: Writes a character to a file descriptor.

36. ft_putstr_fd: Writes a string to a file descriptor.

37. ft_putendl_fd: Writes a string followed by a newline to a file descriptor.

38. ft_putnbr_fd: Writes an integer to a file descriptor.

Utility Functions:

39. ft_isalpha: Checks if a character is alphabetic.

40. ft_isdigit: Checks if a character is a digit.

41. ft_isalnum: Checks if a character is alphanumeric.

42. ft_isascii: Checks if a character is an ASCII character.

43. ft_isprint: Checks if a character is printable.

String Splitting:

44. ft_split: Splits a string into substrings using a delimiter.


Usage/Make Commands

To compile the library, run:

  make

This will generate the static library libft.a.

To remove object files, run:

  make clean


To remove both object files and the compiled library, run:

  make fclean


To clean and rebuild the library, run:

  make re


Once compiled, you can use libft.a in your projects by linking it with the following command:

  gcc -o your_program your_program.c -L. -lft

References & Resources

C Programming Manual: The official C programming manual was referenced for understanding the syntax, functions, and best practices https://en.cppreference.com/w/c.html
W3Schools: W3Schools offers a great overview of C programming concepts, tutorials, and examples. It’s especially helpful for beginners https://www.w3schools.com/c/index.php
Francinette: Used this GitHub repository to test and validate the functionality of my libft before submission. It provides automated tests and feedback, ensuring compliance with project requirements.

AI Usage

AI tools were used to clarify certain concepts and definitions throughout the project, but all functions were written manually.


Author: nkilosan
