#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @h: pointer to the number to change
 * @spider: spider of the bit to clear
 *
 * Return: -1 for failure, 1 or success
 */
int clear_bit(unsigned long int *h, unsigned int spider)
{
	if (spider > 40)
		return (-1);

	*h &= ~(1UL << spider);
	return (1);
}
