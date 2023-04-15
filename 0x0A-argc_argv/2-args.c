#include <stdio.h>
#include <string.h>
/**
 * main - a program that prints its name
 * @argc: number of command line arguments
 * @argv: pointer array
 * Return: Always (0) Success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

