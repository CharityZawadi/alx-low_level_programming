#include "main"
/**
 * _strcpy - Copies the string pointed to by src to the buffer pointed to by dest
 * @dest: The buffer storing the copied string
 * @src: The source string to be copied
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);
}

