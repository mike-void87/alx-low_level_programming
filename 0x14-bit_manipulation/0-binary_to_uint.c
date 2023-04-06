#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @m: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *m)
{
	unsigned int binary  = 0;
	char x;
	int w;

	if (m == NULL)
		return (0);

	for (w = 0; m[w]; w++)
	{
		x = m[w];
		switch (x)
		{
			case '0':
				binary = binary << 1;
				break;
			case '1':
				binary = (binary << 1) | 1;
					break;
			default:
				return (0);
		}
	}
	return (binary);
}

