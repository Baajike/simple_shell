#include "main.h"

/**
* split - It converts text to an array of strings
*
* @text: the text to convert
*
* Return: a pointer to a char array containing the converted text
*/

char **split(char *text)
{
char *token, *command;
char **command_lines;
int i;
unsigned int characters_count;

characters_count = 0;
command_lines = NULL;
i = 0;

characters_count = piped_characters_tally(text, '\n');
command_lines = (char **)malloc((characters_count + 1) * sizeof(char *));
token = strtok(text, "\n");
command = _strndupa(token);
command_lines[i++] = command;
while (token != NULL)
{
token = _strtok(NULL, "\n");
if (token != NULL)
{
command = _strndupa(token);
command_lines[i++] = command;
}

command = _strndupa(token);
command_lines[i++] = command;
}
}
free(text);
command_lines[i] = NULL;
return (command_lines);
}
