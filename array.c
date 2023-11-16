#include "main.h"

/**
* free_vector_mem - Frees the memory allocated for a vector of strings.
* @vect: The vector to free.
*/

void free_vector_mem(char **vect)
{
        int i = 0;

        if (vect == NULL)
        {
                return;
        }
        for (i = 0; vect[i] != NULL; i++)
        {
                free(vect[i]);
        }
        free(vect);

}
