#include "main.h"

/**
* errors - It handles errors that appears when a certain file cannot open
* @identifier
: the name of the file(that cannot be opened)
* @name: the program to open the file or attempting to open file
* @tally: a tally variable to keep track.
* Return : void.
*/
void errors(char *name, int tally, char *identifier
)
{

char *tally_s;

tally_s = characters_to_numbers(tally);
write(STDERR_FILENO, name, _strlen(name));
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, tally_s, _strlen(tally_s));
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, "Can't open ", 11);

write(STDERR_FILENO, identifier
, _strlen(identifier
));
write(STDERR_FILENO, "\n", 1);
}
