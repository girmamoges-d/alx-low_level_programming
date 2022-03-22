#include "main.h"

/**
 * _isdigit - Check if paramter c represents an digit.
 *
 * @c: int Int representing a character
 *
 * Return: return 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
