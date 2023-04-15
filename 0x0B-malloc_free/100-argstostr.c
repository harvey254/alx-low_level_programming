#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all the arguments
 * @ac: number of arguments
 * @av: array
 * Return: pointer to a new string, NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int total_length, i, j, index;
	char *result;

	if (ac == 0 || av == NULL)
		return NULL;

	total_length = 0;

	for (i = 0; i < ac; i++)
	{
	       	j = 0;

		while (av[i][j] != '\0')
		{
			total_length++;
			j++;
		}

		total_length++;
	}

	result = (char*) malloc(sizeof(char) * (total_length + 1));

	if (result == NULL)
	{
		return (NULL);
	}

       	index = 0;

	for (i = 0; i < ac; i++)

	{
	    j = 0;

	    while (av[i][j] != '\0')
	    {
		    result[index] = av[i][j];
		    index++;
		    j++;
	    }

	    result[index] = '\n';
	    index++;


	}

	result[index] = '\0';

	return (result);
}

