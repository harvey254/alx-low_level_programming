#include <stdio.h>
#include <string.h>
/**
 * main - a program that multiplies two numbers
 * @argc: number of command line arguments
 * @argv: pointer array
 * Return: Always (0) Success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	int i = atoi(argv[1]);

	int j = atoi(argv[2]);

	int res = i * j;

	printf("%d\n", res);

	`return (0);
}

