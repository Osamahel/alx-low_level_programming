#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: the integer computed
 *
 * Return: always 0 (success)
*/

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
