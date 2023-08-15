#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - a program that prints all the numbers of base 16 in lowercase
 * Return: Always (0)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int num;
	
	for (num = 0; num <= 15; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
