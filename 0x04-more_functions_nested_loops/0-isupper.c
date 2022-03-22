#include "main.h"

/**
 * _isupper - prints the parameter c is upper
 *
 * @c: charcter checked if its upper
 * Return: 1 if its upper 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
