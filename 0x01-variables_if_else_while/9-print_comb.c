#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints all possible combinations of single-digit numbers
 * Return: Always (0)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int x;
	for (x = 48; x < 58; x++)

		srand(time(0));
		x = rand() - RAND_MAX / 2;

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
