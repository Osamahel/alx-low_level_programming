#include "main.h"

/**
 * print_diagonal - print diagonal line
 *
 * @n: is the number of times the \ character
 * shoud be print
*/

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (postn = 0; postn < n; postn++)
		{
			for (space = 0; space < p; space++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
