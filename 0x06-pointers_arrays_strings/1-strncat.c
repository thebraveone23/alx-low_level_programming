#include "main.h"
/**
 * _strncat - A function that concatenates two strings
 * @dest: destination string pointer
 * @src: source string pointer
 *
 * Return: pointer to destination
  */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b;

	while (dest[a] != '\0')
		a++;
	for (b = 0; b < n && src[b] != '\0'; b++, a++)
		dest[a] = src[b];
	dest[a] = '\0';
	return (dest);
}
