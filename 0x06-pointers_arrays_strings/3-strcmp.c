#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: An integer less than, equal to, or greater than zero if s1 is
 * less than, equal to, or greater than s2
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
{
i++;
}

return (s1[i] - s2[i]);
}

