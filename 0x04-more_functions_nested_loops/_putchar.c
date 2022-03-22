#include <unistd.h>

/**
 * _putchar - writes parameter c to stdout
 * @c: The character to print
 * Return: 0 or 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
