#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - prints the alphabets 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
		i++;
	}
}

