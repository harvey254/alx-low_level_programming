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
	char *prog_nm = argv[0];
	char *prog_bnm = strrchr(prog_nm, '/');

	if (program_bnm != NULL)
	{
		prog_nm = prog_bnm + 1;
	}

	printf("%s\n", prog_nm);

	return (0);
}
