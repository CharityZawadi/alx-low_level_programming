#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * error_check - Check for errors and handle them.
 * @code: Error code
 * @msg: Error message
 */
void error_check(int code, char *msg)
{
if (code == -1)
{
dprintf(STDERR_FILENO, "%s", msg);
exit(98);
}
}

/**
 * copy_file - Copy the content of one file to another.
 * @file_from: Source file descriptor
 * @file_to: Destination file descriptor
 */
void copy_file(int file_from, int file_to)
{
char buffer[1024];
ssize_t bytes;

while ((bytes = read(file_from, buffer, 1024)) > 0)
{
if (write(file_to, buffer, bytes) != bytes)
{
dprintf(STDERR_FILENO, "Error: Can't write to file\n");
close(file_from);
close(file_to);
exit(99);
}
}

if (bytes < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file\n");
close(file_from);
close(file_to);
exit(98);
}
}

/**
 * main - Entry point, copy one file to another.
 * @ac: Argument count
 * @av: Argument vector
 * Return: 0 on success, 97-100 on failure
 */

int main(int ac, char **av)
{
int file_from, file_to;

if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
exit(97);
}

file_from = open(av[1], O_RDONLY);
error_check(file_from, "Error: Can't read from file\n");

file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
error_check(file_to, "Error: Can't write to file\n");

copy_file(file_from, file_to);

if (close(file_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}

if (close(file_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
exit(100);
}

return (0);
}

