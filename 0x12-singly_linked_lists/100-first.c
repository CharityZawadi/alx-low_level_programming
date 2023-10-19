#include <stdio.h>

/**
 * print_message - Prints a message before the main function is executed.
 */
void print_message(void) __attribute__((constructor));

void print_message(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}


