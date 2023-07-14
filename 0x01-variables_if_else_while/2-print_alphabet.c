#include<stdio.h>

/**
 * main - Programm that prints alphabet
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char b;
	b = 'a';

	while (b <= 'z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
