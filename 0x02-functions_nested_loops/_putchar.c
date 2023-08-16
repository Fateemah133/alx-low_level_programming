#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On sucess 1
 * On erroer: -1 is returned, and errno is set appropariately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
