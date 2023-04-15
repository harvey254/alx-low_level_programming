#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - a program that multiplies two numbers
 * @argc: number of command line arguments
 * @argv: pointer array
 * Return: Always (0) Success
 */

int main(int argc, char *argv[])
{
	int i, j, res;

	if (argc < 2)
		printf("0\n");

	for (i = 1; i < argc; i++)
	{
	       char *arg = argv[i];

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");

					return (1);
			}
		}

		res += atoi(arg);
	}

	printf("%d\n", res);

	return (0);
}

