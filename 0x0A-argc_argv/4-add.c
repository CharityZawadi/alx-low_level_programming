#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - Check if a string represents a positive number
 * @str: The string to check
 *
 * Return: 1 if the string is a positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
if (*str == '\0')
return (0);

while (*str)
{
if (!isdigit(*str))
return (0);
str++;
}

return (1);
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Description: This function adds positive numbers and prints the result.
 * If no number is passed to the program, it prints 0. If there is an invalid
 * number, it prints an error message and returns 1.
 *
 * Return: 0 if successful, 1 if there is an error
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i;

for (i = 1; i < argc; i++)
{
if (is_positive_number(argv[i]))
{
int num = atoi(argv[i]);
sum += num;
}
else
{
printf("Error\n");
return (1);
}
}

printf("%d\n", sum);
return (0);
}

