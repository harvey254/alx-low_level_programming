#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * cap_string - capitalizes all string values
 * @str: string value
 * Return: capitalized string
 */

char *cap_string(char *str)
{

	int i;

	if (str[0] >= 'a' && str[0] <= 'z')

	{

		str[0] = toupper(str[0]);

	}

	for (i = 1; str[i] != '\0'; i++)

	{

		if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||

				str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||

				str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||

				str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||

				str[i - 1] == '}')

		{

			if (str[i] >= 'a' && str[i] <= 'z')

			{

				str[i] = toupper(str[i]);

			}

		}

	}

	return (str);
}
