#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * check_arguments - Check the command-line arguments.
 * @ac: Argument count
 * @av: Argument vector
 * @filename_from: Pointer to the source filename
 * @filename_to: Pointer to the destination filename
 * Return: 0 on success, 1 on failure
 */
int check_arguments(int ac,
char **av, char **filename_from, char **filename_to)
{
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
return (1);
}

*filename_from = av[1];
*filename_to = av[2];
return (0);
}

/**
 * main - Copy the content of a file to another file.
 * @ac: Argument count
 * @av: Argument vector
 * Return: 0 on success, 97-100 on failure
 */
int main(int ac, char **av)
{
int fd_from, fd_to;
char *filename_from, *filename_to;
char buffer[1024];
ssize_t bytes_read, bytes_written;

if (check_arguments(ac, av, &filename_from, &filename_to) != 0)
return (97);

fd_from = open(filename_from, O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename_from);
return (98);
}

fd_to = open(filename_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename_to);
close(fd_from);
return (99);
}

while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename_to);
close(fd_from);
close(fd_to);
return (99);
}
}
close(fd_from);
close(fd_to);
return (0);
}

