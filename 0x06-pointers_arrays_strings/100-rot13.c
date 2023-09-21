#include "main.h"

/**
 * rot13 - Encodes a string using ROT13
 * @str: The string to encode
 *
 * Return: Pointer to the encoded string
 */
char *rot13(char *str)
{
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, j;

for (i = 0; str[i]; i++)
{
for (j = 0; alphabet[j]; j++)
{
if (str[i] == alphabet[j])
{
str[i] = rot13[j];
break;
}
}
}
return (str);
}

