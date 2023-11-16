#include "main.h"

/**
 * piped_characters_tally - counts the number a character appears in a string
 * @str: the strings 
 * @c:  Character
 * Return: the number of occurrences of @c in @strings
 */

unsigned int piped_characters_tally(char *str, char c)
{
        unsigned int num = 0;

        while (*str != '\0')
        {
                if (*str == c)
                        num++;
                str++;
        }
        return (num + 1);
}
