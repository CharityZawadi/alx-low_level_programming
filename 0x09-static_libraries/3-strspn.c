#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the string containing characters to search for
 *
 * Return: the number of bytes in the initial segment of s that consist only
 * of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int i, j, match;

for (i = 0; s[i]; i++)
{
match = 0;
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
match = 1;
break;
}
}
if (!match)
break;
count++;
}

return (count);
}

