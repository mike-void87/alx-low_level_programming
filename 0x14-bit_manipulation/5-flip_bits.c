#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @k: first number
 * @j: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int k, unsigned long int j)
{
	unsigned int mash = 0;
	unsigned long int champ = j ^ k;

	while (champ != 0)
	{
		if (champ & 1)
			mash++;
		champ >>= 1;
	}

	return mash;
}
