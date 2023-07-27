/**
 * rot13 - Encode string using rot13
 * @s: string to encode
 *
 * Return: Pointer to string
 */
char *rot13(char *s)
{
	int a;

	a = 0;
	while (s[a] != 0)
	{
		if ((s[a] >= 'A' && s[a] <= 'Z') || (s[a] >= 'a' && s[a] <= 'z'))
		{
			while ((s[a] >= 'A' && s[i] < 'N') || (s[a] >= 'a' && s[a] < 'n'))
			{
				s[a] += 13;
				a++;
			}
			while ((s[a] >= 'N' && s[a] <= 'Z') || (s[a] >= 'n' && s[a] <= 'z'))
			{
				s[a] -= 13;
				a++;
			}
		}
		else
			a++;
	}
	return (s);
}
