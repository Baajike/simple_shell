#include "main.h"

/**
* process_id - Gets the Representation of Shell instance
* Return: the process ID.
*/

char *pid()
{
char *ppid_s;
pid_t pid = getpid();

ppid_s = num_of_characters(pid);

return (ppid_s);
}
