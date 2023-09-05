#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that create an array of chaaracter
 * @size: the size of the character to print
 * @c: char to assign
 * Return: a pointer to the array, or Null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
