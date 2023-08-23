#include "main.h"

/**
 * char *_strcat - function that concenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (i = 0 ; i < x && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
