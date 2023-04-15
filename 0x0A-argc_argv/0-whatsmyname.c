#include <stdio.h>
/**
 * main - a program that prints its name
 * @argc: number of command line arguments
 * @argv: pointer array
 * Return: Always (0) Success
 */

int main(__unused((attribute))__ int argc, char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
