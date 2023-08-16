#include "main.h"
#include <stdio.h>
/**
 * main - a function that checks for alphabetic character
 * Return: otherwise (0)
 */
int _isalpha(int c);
{
	    int r;

    r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0');
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
