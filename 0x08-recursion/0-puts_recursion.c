#include "main.h"

/**
 * _puts_recursion - funtion that print a string
 * @s: character
 * Return: always 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
			_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
