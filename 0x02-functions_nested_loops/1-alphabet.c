#include "main.h"
/**
 * print_alphabet - make the alphbate
 *
 * Return: void
 *
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch ++)
	{
		_printchar(ch);
	}
	_printchar('\n');
}
