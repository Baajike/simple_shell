#include "main.h"

/**
* _executer_commands - Executes the given commands.
* @av: An array of strings containing the command and its arguments.
* @path: The path of the command to execute.
* @rank_status: A pointer to an integer variable to set the rank_status.
* @env: An array of strings representing the environment variables.
* Returns: NOTHING.
*/
void _executer_commands(char *path, char **av, char **env, int *rank_status)
{
pid_t parent_id;

parent_id = fork();

if (parent_id < 0)
{
perror("fork has failed");
exit(EXIT_FAILURE);
}

if (parent_id == 0)
{
execve(path, av, env);

perror("execve has failed");
exit(EXIT_FAILURE);
}

else if (parent_id > 0)
{ waitpid(parent_id, rank_status, WUNTRACED);
*rank_status = WEXITSTATUS(*rank_status);
}
}
