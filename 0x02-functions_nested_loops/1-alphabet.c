#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char lc;

	lc = 'a';

	while (lc <= 'z')
	{
		_putchar(lc);
		lc++;
	}

	_putchar('\n');
}
