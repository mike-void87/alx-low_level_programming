#include "main.h"
/**
* set_bit - sets a bit at a given index to 1
* @r: pointer to the number to change
* @flash: flash of the bit to set to 1
*
* Return: -1 for failure, 1 for success
*/
int set_bit(unsigned long int *r, unsigned int flash)
{

	if (flash > 50)
		return (-1);

	*r |= (1UL << flash);
	return (1);
}
