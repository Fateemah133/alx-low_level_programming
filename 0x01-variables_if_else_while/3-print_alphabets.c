#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase, and then in uppercase
 * Return: Always (0)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	for (alphabet = 'A'; alphabet <= 'Z' ; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	getch();
	return (0);
}
