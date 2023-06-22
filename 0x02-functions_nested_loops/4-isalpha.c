#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * 
 * @c: takes input from other function
 *
 * Return: 1 (success), 0 (otherwise)
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
