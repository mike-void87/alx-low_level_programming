#include "main.h"
#include <stdlib.h>

/**
* argstostr - Concatenates all arguments of your program.
* @ac: Count of arguments.
* @av: Arguments.
* Return: Pointer to new string, or NULL if error.
*/

char *argstostr(int ac, char **av)
{
int i, j, k = 0, len = 0;
char *s;

if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
len++;
j++;
}
len++;
}

s = malloc(sizeof(char) * len + 1);
if (s == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
s[k] = av[i][j];
j++;
k++;
}
s[k] = '\n';
k++;
}
s[k] = '\0';
return (s);
}
