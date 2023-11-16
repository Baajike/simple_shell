#include "main.h"

/**
 * _getenv_var - a function to get environment variable
 * @name: name of enviroment variable to get the value of
 * Return: the value of the enviroment varable
*/

char *_getenv_var(const char *name)
{
        int i;
        char *_name;
        char *_value;
        char *value = NULL;


        for (i = 0; environ[i] != NULL; i++)
        {

                _name = strtok(environ[i], "=");

                _value = strtok(NULL, "=");


                if (strcmp(_name, name) == 0)
                {

                        value = _value;
                        break;
                }
        }

        return (value);
}
