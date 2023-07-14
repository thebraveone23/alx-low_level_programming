#include<stdio.h>

/**
 * main - A program that prints alphabet in lower & upper cases
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char l = 'a';
	char u = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
