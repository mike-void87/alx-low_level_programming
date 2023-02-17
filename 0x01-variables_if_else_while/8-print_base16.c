#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}

	i = 10;
	while (i < 16)
	{
		putchar(i - 10 + 'a');
		i++;
	}

	putchar('\n');

	return (0);
}
