#include "main.h"
#include <stdio.h>
/**
 * main - a function that checks lower character
 * Return: Otherwise (0)
 */
int main(void)
{
	char ch;
	
	printf("Enter any character: ");
	scanf("%c", &ch);
	
	if(ch >= 'A' && ch <= 'Z')
	{
		printf("'%c' is uppercase alphabet.", ch);
	}
	else if(ch >= 'a' && ch <= 'z')
	{
		printf("'%c' is lowercase alphabet.", ch);
	}
	else
	{
		printf("'%c' is not an alphabet.", ch);
	}
	return (0);
}
