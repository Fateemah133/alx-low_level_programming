#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints all single digit numbers 
 * Return: Always (0)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int x = 0;
	
	while (x < 10)
	{
		printf("%d", x);
		if (x < 9)
		{
			printf(", ");
		}
		x++;
	}
       	printf("\n");

	Return (0);
}
