#include "main.h"

/**
* pid - Gets the Representation of Shell instance
* Return: the process ID.
*/

char *pid()
{
char *ppid_s;
pid_t pid = getpid();

ppid_s = characters_to_numbers(pid);

return (ppid_s);
}
