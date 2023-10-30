#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int ac, char **av);
int open_source_file(const char *filename);
int open_destination_file(const char *filename);
int copy_file(int from_fd, int to_fd);
int close_file(int fd);


#endif /* MAIN_H */

