#include <stdio.h>
#include <stdlib.h>

/**
 * minCoins - Calculate the minimum number of coins needed for change
 * @cents: The amount in cents
 *
 * Return: The minimum number of coins needed
 */
int minCoins(int cents)
{
int coins[] = {25, 10, 5, 2, 1};
int numCoins = 0;
int i;

if (cents <= 0)
return (0);

for (i = 0; i < 5; i++)
{
while (cents >= coins[i])
{
cents -= coins[i];
numCoins++;
}
}

return (numCoins);
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Description: This function calculates the minimum number of coins needed to
 * make change for a given amount of money and prints the result.
 * If the program is not given exactly one argument, it prints an error message
 * and returns 1. If the argument is negative, it prints 0.
 *
 * Return: 0 if successful, 1 if there is an error
 */
int main(int argc, char *argv[])
{
int cents, numCoins;

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}

numCoins = minCoins(cents);
printf("%d\n", numCoins);
return (0);
}

