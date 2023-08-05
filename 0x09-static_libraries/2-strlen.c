#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: input of the string.
 * Return: length of string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
