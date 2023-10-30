#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * open_source_file - Opens a source file for reading.
 * @filename: The name of the source file.
 *
 * Return: File descriptor if successful, -1 on failure.
 */
int open_source_file(const char *filename);

/**
 * open_destination_file - Opens a destination file for writing.
 * @filename: The name of the destination file.
 *
 * Return: File descriptor if successful, -1 on failure.
 */
int open_destination_file(const char *filename);

/**
 * copy_file - Copies the content of one file to another.
 * @from_fd: The source file descriptor.
 * @to_fd: The destination file descriptor.
 *
 * Return: 0 on success, -1 on failure.
 */
int copy_file(int from_fd, int to_fd);

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to close.
 *
 * Return: 0 on success, -1 on failure.
 */
int close_file(int fd);

/**
 * main - Entry point for the copy program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, 97, 98, 99, or 100 on failure.
 */
int main(int argc, char *argv[])
{
int from_fd, to_fd;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
return (97);
}

from_fd = open_source_file(argv[1]);
if (from_fd == -1)
return (98);

to_fd = open_destination_file(argv[2]);
if (to_fd == -1)
{
close_file(from_fd);
return (99);
}

if (copy_file(from_fd, to_fd) == -1)
{
close_file(from_fd);
close_file(to_fd);
return (99);
}

if (close_file(from_fd) == -1)
{
close_file(to_fd);
return (100);
}

if (close_file(to_fd) == -1)
return (100);

return (0);
}

