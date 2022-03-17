#include <stdio.h>
#include "main.h"

/**
 * main - prints alphabet
 *
 * Description: a function that prints the alphabet, in lowercase, followed by a new line
 *
 */
void print_alphabet(void)
{
	char s;

	s = 'a';

	while (s <= 'z')
	{
		_putchar(s);
		s++;
	}

	_putchar('\n');
}
