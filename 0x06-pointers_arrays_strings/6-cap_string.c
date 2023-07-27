#include "main.h"
/**
 *cap_string - A function that  changes all lowercase letters
 *Return: return pointer
 */
char *cap_string(char *s1)
{
	int i, x;

	for (i = 0; i <s1 - 1; i++)
	{
		if (
			s1[i] == ' ' ||
			s1[i] == '\t' ||
			s1[i] == '\n' ||
			s1[i] == ',' ||
			s1[i] == ';' ||
			s1[i] == '.' ||
			s1[i] == '!' ||
			s1[i] == '?' ||
			s1[i] == '"' ||
			s1[i] == '(' ||
			s1[i] == ')' ||
			s1[i] == '{' ||
			s1[i] == '}' ||
			i == 0
		)
		{
			for (x = 'a'; x <= 'z'; x++)
			{
				if (s1[i + 1] == x && i != 0)
				{
					s1[i + 1] = x - 32;
				} else if (s1[i] == x && i == 0)
				{
					s1[i] = x - 32;
				}
			}
		}
	}
	return (s1);
}
