
/**
 * _strcmp - Compares two strings
 * @s1: The first string to be compared
 * @s2: The second string to be compared
 *
 * Return: Negative value if s1 is less than s2,
 *         Positive value if s1 is greater than s2,
 *         0 if s1 is equal to s2
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] && s2[i] && s1[i] == s2[i])
{
i++;
}

return (s1[i] - s2[i]);
}

