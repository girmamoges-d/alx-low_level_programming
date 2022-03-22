#include "main.h"

/**
 * _isupper - checks if the parameter c is uppercase
 * @c: represent a character
 *
 * Return: gives 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
