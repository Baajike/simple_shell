#include "main.h"
#include <stddef.h>

/**
* comments - It Removes comments from the input string.
* value: The input string.
*/

void comments(char *value)
{
int i = 0;
char present_char;

int quote = 0;

for (i = 0; value[i] != '\0'; i++)
{
present_char = value[i];

if (present_char == '"')
{
quote = !quote;
}
if (present_char == '#' && !quote)
{
value[i] = '\0';
break;
}

}

}
