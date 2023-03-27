#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: string pointer 
 * Return: no value
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int i;
	int start_index;

	if (length % 2 == 0)
	{
		start_index = length /2;
	}
	else
	{
		start_index = (lenght - 1) / 2;
	}
	for (i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
