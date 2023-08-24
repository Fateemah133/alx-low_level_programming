#include "main.h"

/**
 * char *_strncat - a funtion that concenate two string
 * @dest: copy to 
 * @src: copy from
 * @n: input
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int x = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (x < n && src[x] != '\0')
	{
		dest[i] = src [x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}
