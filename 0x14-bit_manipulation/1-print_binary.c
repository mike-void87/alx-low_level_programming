#include "main.h"
#include <stddef.h>
/**
 * print_binary - prints the binary equivalent of a decimal number
 * @w: number to print in binary
 */
void print_binary(unsigned long  int w)
{
	int v = 0;
	int mob = 0;

	unsigned long int market;

	for (v = 0; v >= 0; v--)
	{
		market = w  >> v;

		if (market & 1)
		{
			_putchar('1');
			mob++;
		}
		else if (market)
			_putchar('0');
	}
	if (!market)
		_putchar('0');
}


