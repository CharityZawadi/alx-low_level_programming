#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * create_file - Create a file with the given text content
 * @filename: The name of the file to create
 * @text_content: The text content to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd, len, bytes_written;

if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);

if (text_content == NULL)
{
close(fd);
return (1);
}

for (len = 0; text_content[len] != '\0'; len++)
continue;

bytes_written = write(fd, text_content, len);

close(fd);

if (bytes_written == len)
return (1);
else
return (-1);
}

