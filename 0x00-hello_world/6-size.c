#include <stdio.h>
/**
 * main - entry
 * Return: Always 0
 */
int main(void)
{
printf("Size of a char: %l byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %l byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %l byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %l byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of a float: %l byte(s)\n", (unsigned long)sizeof(float));

return (0);
}
