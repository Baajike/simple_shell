#include "main.h"

/**
 * free_mem_array - Frees memory allocated for an array of strings.
 * @argv: The array of strings to be freed.
 * Return : nothing
 */

void free_mem_array(char **argv)
{
        char **text;

        if (argv == NULL)
        {
                return;
        }


        text = argv;


        while (*text != NULL)
        {

                free(*text);

                text++;
        }

     
        free(argv);
}
