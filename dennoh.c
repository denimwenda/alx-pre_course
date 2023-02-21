#include <stdio.h>

/**
 * main - print prime from 1 to 10
 *
 * Return: 0
 */
int main(void)
{
	int i, j, isPrime;

	for (i = 2; i <= 10; i++)
	{
		isPrime = 1;
	for (j = 2; j < i; j++)
	{
		if (i % j == 0)
		{
			isPrime = 0;
			break;
		}
	}
	if (isPrime == 1)
	{
		printf("%d\n", i);
	}
	return (0);
}
