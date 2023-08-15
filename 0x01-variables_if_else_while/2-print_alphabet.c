#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Progrma to print alphabet in lowercase followed by a new line using putchar function
 *
 * Return: Always (0)
 */

/* betty style doc for function main goes there */
int main(void)
{
	char alphabet = 'a';

	srand(time(0));
	a = rand() - RAND_MAX / 2;
	while (alphabet <= 'z')
	{
		putchar(alphabet);
	}
	putchar('\n');
	/* your code goes there */
	return (0);
}
