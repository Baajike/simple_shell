#include "main.h"

/**
* convert - Converts a string argument to an integer.
* @s: The string to convert, the input by user
* Return: Returns the converted integer

*/

int convert(char *s)
{
unsigned int n, i;
char number;

i = 0;
n = 0;

while (s[i] != '\0')
{

if (!((s[i] >= '0') && (s[i] <= '9')))
{
return (-1);
}

if (((s[i] >= '0') && (s[i] <= '9')))
{
n = (n * 10) + (s[i] - '0');
}
else if (s[i] == '+')
{
number++;
}

i++;
}

return (n);
}
