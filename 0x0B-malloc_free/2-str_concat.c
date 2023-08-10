#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - additions two strings for size.
 * @s1: first input
 * @s2: second input
 *
 * Return: concate of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, len;
	char *conct;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len2++;
	}

	len = len1 + len2;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (conct == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		conct[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		conct[i] = s2[j];
	conct[len] = '\0';

	return (conct).
}
