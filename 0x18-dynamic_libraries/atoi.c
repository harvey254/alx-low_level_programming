#include "main.h"
/**
 * _atoi - convert string to integer
 * @s: string value
 * Return: integer value converted from string
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s == ' ')
	{
		s++;
	}
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (sign * result );
}
