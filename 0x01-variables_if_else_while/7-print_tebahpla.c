#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that print lowercase in revers
 * Return: Always (0)
 */

/* betty style doc for function main goes there */
int main(void)
{
	char ch;

	ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
