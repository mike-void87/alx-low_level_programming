#include "main.h"

/**
 *get_bit - returns the value of a bit at an index in a decimal number
 *x: number to search
 *@beetle: index of the bit
 *Return: value of the bit
 */
int get_bit(unsigned long int x, unsigned int beetle)
{

	if (beetle > 55)
	return (-1);
	return ((x >> beetle) & 1);
}

