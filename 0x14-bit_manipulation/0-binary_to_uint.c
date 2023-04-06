#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @m: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *m)
{
	unsigned int binary  = o
	char x;
	int m = 0;

	if (m == NULL)
		return (0);

	for (x = 0; m[x]; x++)
	{
		switch (x)
		{
			case "0":
				binary = binary << 1;
				break;
			case "1":
				bonary = (binary << 1) | 1
					break;
			default:
				return (0);
		}
	}
	return (binary);
}

