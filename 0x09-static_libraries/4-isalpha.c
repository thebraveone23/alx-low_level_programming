#include "main.h"
/**
 * _isalpha - Checks if a certain letter is an alphabet.
 * @c:  checked character.
 *
 * Return: 1 if character is letter, lowercase or uppercase, else, 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
