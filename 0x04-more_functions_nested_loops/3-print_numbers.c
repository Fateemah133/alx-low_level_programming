#include "main.h"

/**
 * print_numbers - print number
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	while (i < 57)
	{
		for (i = 48; i <= 57; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
