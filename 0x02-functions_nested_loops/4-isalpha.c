#include "main.h"
/**
 *_isalpha - shows 1 if the input is lowercase or uppercase. Another case 0
 *@c: The character ASCII code
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
if (c >= 65 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}

