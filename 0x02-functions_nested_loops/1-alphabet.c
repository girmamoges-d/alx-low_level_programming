#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - uses the _putchar function to print alphabets in lower case
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
