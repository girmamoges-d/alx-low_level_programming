#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char i;

	i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
