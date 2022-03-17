#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - lowercase 
 *
 * Description: a function that prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: 0 (Success)
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
