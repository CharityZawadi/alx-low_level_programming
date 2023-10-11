#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/**
 * struct dog - Define a new type struct dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: A structure that represents a dog.
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 *
 * Return: On success 1, on error -1
 */
int _putchar(char c);

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);
int main(int argc, char *argv[]);

#endif /* MAIN_H */

