#include "main.h"
/**
*_islower - Check if char is lowercase
*@c: Is the char to be checked
* Return: 1 if char is lowercase or 0 otherwise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);

	}
	return (0);
}

