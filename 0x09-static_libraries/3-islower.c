#include "main.h"

/**
 * _islower - a function that Checks character for lower case.
 * @c: checked letters.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
