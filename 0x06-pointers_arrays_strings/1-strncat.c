#include "main.h"

/**
 * char *_strncat - a funtion that concenate two string
 * @dest: copy to 
 * @src: copy from
 */
char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = strlen(dest);
	size_t i;
	
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return dest;
}
