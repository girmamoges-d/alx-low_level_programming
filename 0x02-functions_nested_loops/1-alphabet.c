#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char lower_case;

	lower_case = 'a';

	while (lower_case <= 'z')
	{
		_putchar(lower_case);
		lower_case++;
	}

	_putchar('\n');
}
