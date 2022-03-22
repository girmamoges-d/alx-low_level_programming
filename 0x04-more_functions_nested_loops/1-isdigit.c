#include "main.h"

/**
 * _isdigit - Check if paramter c represents an digit.
 *
 * @c: character to check
 *
 * Return: return 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
