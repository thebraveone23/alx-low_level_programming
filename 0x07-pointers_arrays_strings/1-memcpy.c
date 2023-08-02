#include <stdio.h>
#include <string.h>
/**
 * memcpy - A program that  copy memory areaS.
 *
 * @dest: memory from source
 * @src: copied memory
 * @n: num of byte
 *
 * Return: copy memory with byte change
 */
char *memcpy(char *dest, char *src, unsigned int n)
{
	int l = 0;
	int i = n;

	for (; l < i; l++)
	{
		dest[l] = src[l];
		n--;
	}
	return (dest);
}
