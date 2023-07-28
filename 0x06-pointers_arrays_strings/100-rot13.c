/**
 * rot13 - Encode string using rot13
 * @s: string to encode
 *
 * Return: Pointer to string
 */
char *rot13(char *s)
{
	int x;

	x = 0;
	while (s[x] != 0)
	{
		if ((s[x] >= 'A' && s[x] <= 'Z') || (s[x] >= 'a' && s[x] <= 'z'))
		{
			while ((s[x] >= 'A' && s[x] < 'N') || (s[x] >= 'a' && s[x] < 'n'))
			{
				s[x] += 13;
				x++;
			}
			while ((s[x] >= 'N' && s[x] <= 'Z') || (s[x] >= 'n' && s[x] <= 'z'))
			{
				s[x] -= 13;
				x++;
			}
		}
		else
			x++;
	}
	return (s);
}
