#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string to encode
 *
 * Return: A pointer to the resulting string
 */
char *leet(char *str)
{
int i = 0;
char leet_dict[] = "aAeEoOtTlL";
char leet_replace[] = "4433007711";

while (str[i] != '\0')
{
int j = 0;

while (leet_dict[j] != '\0')
{
if (str[i] == leet_dict[j])
{
str[i] = leet_replace[j];
break;
}
j++;
}
i++;
}

return (str);
}

