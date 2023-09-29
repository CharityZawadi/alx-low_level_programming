#include <stdio.h>

/**
 * main - Entry point
 *@argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Description: This function prints the name of the program.
 * If you rename the program, it will print the new name.
 * You should not remove the path before the name of the program.
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
if (argc > 0)
{
printf("%s\n", argv[0]);
return (0);
}
else
{
return (1);
}
}


