#include <stdio.h>
/**
 * main - A program that prits single digit numbers
 *
 * Return: 0 (Success)
 */

int main(void)
	{
	int b;
	
	for (b = 0; b < 10; b++)
	{
		putchar(b + '0');
		if (b < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
	}
