#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that prints all single number
 * Return: Always (0)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
