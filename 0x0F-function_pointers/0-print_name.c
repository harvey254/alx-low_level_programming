#include "function_pointers.h"
#include <string.h>
/**
 * print_name - prints a name
 * @name: string value
 * @f: pointer to function
 *
 * Return: no value
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
