#include "main.h"

/**
 * _isupper - program to check for uppercase
 * @c: the int for the parameters of my function
 * Return: return 1 if c is uppercase, else return 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
