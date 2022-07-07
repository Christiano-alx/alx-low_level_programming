#include <stdio.h>

/**
 * main - Prints all natural numbers below 1024 that
 * are multiples of 3 0r 5
 *
 * Return: Always 0
 */
int main(voi)
{
	int a, b;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			b += a;
	}
	printf("%d\n", b);
	return (0);
}
