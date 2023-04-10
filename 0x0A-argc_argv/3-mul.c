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

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	i = atoi(argv[1]);

	j = atoi(argv[2]);

	res = i * j;

	printf("%d\n", res);

	return (0);
}

