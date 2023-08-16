#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * for, The number to be computed
 * Return: Absolute value of number or else
 */

int _abs(int c)
{

	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (0);
}
