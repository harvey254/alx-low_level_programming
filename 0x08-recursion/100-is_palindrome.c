#include "main.h"
/**
 * _palindrome - returns 1 if palindrome 0 if not
 * @s: string value
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int st, ed;

	if (st >= ed)
	{
		return (1);

	}

	if (s[st] != s[ed])
	{
		return (0);
	}

	return (is_palindrome(s, start+1, end-1));
}

