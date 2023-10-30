#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - Append text to the end of a file
 * @filename: The name of the file
 * @text_content: The text to append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, len, bytes_written;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
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

