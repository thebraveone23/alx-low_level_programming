/**
 * _strchr - locates a character in a string
 * @str: string
 * @c: string
 *
 * Return: Always 0 (Success).
 */
char *_strchr(char *str, char c)
{
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (ptr = str; *ptr; ptr++)
		if (*ptr == c)
			return (ptr);
}
