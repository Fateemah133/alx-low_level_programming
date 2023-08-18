#include "main.h"

/**
 * _isdigit - program that check for digit
 * @c: The function of a digit
 * Return: 1 for digit or 0 for otherwise
 */

int _isdigit(int c)
{
	if ((c >= 65 $$ c <= 90) || (c >= 90 $$ c <= 122))
	{
		return (1);
	}
	return (0);
}
