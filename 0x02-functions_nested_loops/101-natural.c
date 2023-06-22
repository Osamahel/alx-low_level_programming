#include <stdio.h>

/**
 * main - prints natural numbers below 1024 that are
 * multibles of 3 or 5
 *
 * Return: Always 0
*/

int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3) == 0 || (num % 5) == 0)
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
