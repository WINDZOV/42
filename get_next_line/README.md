*Este proyecto ha sido creado como parte del currículo de 42 por nkilosan*

#Description:

Reads from a file descriptor using a buffer of size BUFFER_SIZE

Stores leftover data between calls using a static stash

Supports multiple file descriptors in the mandatory version

Returns:

a line ending with \n if present

the last line without \n at EOF

NULL on error or when reading is finished

#ℹ️ Although the project includes a bonus part for handling multiple file descriptors,
this implementation supports multiple file descriptors directly in the mandatory version,
without separating the bonus files.

#Instruction

Example with a custom BUFFER_SIZE:

gcc -Wall -Wextra -Werror -D BUFFER_SIZE=2048 get_next_line.c get_next_line_utils.c


If BUFFER_SIZE is not defined, it defaults to:

# define BUFFER_SIZE 2048

#Example 

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    int     fd;
    char    *line;

    fd = open("example.txt", O_RDONLY);
    if (fd < 0)
        return (1);

    while ((line = get_next_line(fd)))
    {
        printf("%s", line);
        free(line);
    }
    close(fd);
    return (0);
}

##Resources
#Technical References

read(2) manual

open(2) and close(2) manuals

Official C language documentation

Official get_next_line project subject (42)

#Use of Artificial Intelligence

AI was used as a support tool to:

review code clarity

improve documentation (README)

verify explanations of the algorithm and memory management

AI was not used to directly generate the final code, but rather as support for understanding, reviewing, and writing documentation.
