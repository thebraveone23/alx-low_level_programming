#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int a = 0, c = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		a = rand() % 128;
		if ((c + a) > 2772)
			break;
		c = c + a;
		printf("%c", a);
	}
	printf("%c\n", (2772 - c));
	return (0);
}
