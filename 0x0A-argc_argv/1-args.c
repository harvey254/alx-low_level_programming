#include <stdio.h>
#include <string.h>
/**
 * main - a program that prints its name
 * @argc: number of command line arguments
 * @argv: pointer array
 * Return: Always (0) Success
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int i;

	printf("%d\n", argc - 1);

	return (0);
}
