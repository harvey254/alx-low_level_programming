#include "main.h"
/**
 *_isalpha - shows 1 if the input is lowercase or uppercase. Another case 0
 *@c: The character ASCII code
 * Return: returns 1 if lower or upper case, 0 otherwise
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
