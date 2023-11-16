#include "main.h"

/**
* _strlen - it is used to returns the length of a string
* @s: a pointer to the string
* Return: the length of the string as an integer.
*/

int _strlen(char *s)
{
    int length = 0;

    for (; *s != '\0'; s++)
    {
        length++;
    }

    return length;
}

/**
* _strndupa - This function is used to take two parameters.
* @str: The string to duplicate
* 
* Return: NULL if strndupa fails
*/

char *_strndupa(char *str)
{
    if (str == NULL)
        return NULL;

    return strdup(str);
}

/**
* _strncmp - Compares two strings.
*
* @s1: Pointer to the first string to be compared.
* @s2: Pointer to the second string to be compared.
* 
* 
*Return: An integer less than, equal to, or greater than zero
*/

int _strncmp(char *s1, char *s2)
{
    while (*s1 && *s2 && *s1 == *s2)
		{
			if (*s1 != *s2)
			{
				return ((int)*s1 - (int)*s2);
			}
			s1++;
			s2++;
		}

	return ((int)*s1 - (int)*s2);
}

/**
 * _strncpy - it copies n charater of strings from source to
 * destination.
 *
 * @dest: The destination string
 * @src: The source string
 * 
 * Return: pointer to destination string
 */

char *_strncpy(char *dest, char *src)
{

	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strcat - It concatenate drc and dest
 * @dest: destination of concat
 * @src: source array to concat
 * 
 * Return: a pointer
 */

char *_strcat(char *dest, char *src)
{
        size_t dest_len = strlen(dest);
        int i;

        for (i = 0; src[i] != '\0'; i++)
        {
                dest[dest_len + i] = src[i];
        }

        dest[dest_len + i] = '\0';

        return (dest);
}

