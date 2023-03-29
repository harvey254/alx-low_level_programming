#include "main.h"
#include <ctype.h>
/**
 * string_toupper - changes all lowercase to uppercase
 * @str: string value in lowercase
 * Return: Uppercase string value
 */
char *string_toupper(char *str)
{
	char *ptr = str;
	while (*ptr != '\0')
	{
		if (islower(*ptr))
		{
			*ptr = toupper(*ptr);
		}
		ptr++;
	}
	return (str);
}
