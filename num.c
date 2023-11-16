#include "main.h"

/**
 * characters_to_numbers - Converts an integer to a string.
 * 
 * @num: The integer to be converted.

 * Return: The string representation of the integer,
 * or NULL on failure.
 */

char *characters_to_numbers(int num)
{
	int tally = 0, temprory = num;
	char *copied_number;

	
	if (num == 0)
		tally = 1;
	else
	{
		while (temprory != 0)
		{
			temprory = temprory / 10;
			tally++;
		}
	}

	copied_number = malloc(sizeof(char) * (tally + 1));
	if (!copied_number)
	{
		perror("malloc error");
		return (NULL);
	}

	copied_number[tally] = '\0';


	while (tally != 0)
	{
		tally--;
		copied_number[tally] = '0' + num % 10;
		num = (num / 10);
	}


	return (copied_number);
}
