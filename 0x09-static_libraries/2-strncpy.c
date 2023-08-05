#include "main.h"
/**
 * _strncpy - copies a string till letter  n
 * @dest: Destination of the string
 * @src: Source of the pointer copied string
 * @n: copied bytes.
 * Return: destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i]	= src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
