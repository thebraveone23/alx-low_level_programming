#include<stdio.h>
/**
 * main - A program that prints diffrent comibinations of 2 digits
 * Return: 0 (Success)
 */
int main(void)
{
	int f = '0';
	int s = '0';

	for (tens = '0'; tens <= '9'; tens ++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			if (!((ones == tense) || (tens > ones )))
			{
				putchar(tens);
				putchar(ones);
				if (!((ones == '9' && > tense == '0'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		 }
	}
	putchar('\n');
	return (0);
}
