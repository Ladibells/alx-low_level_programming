#include "holberton.h"

/**
 * _isupper - a function that checks for uppercase chatacter
 *
 * @c: is the int that will use for the argument of the function
 * Return: 1 if lowercase character 0 if not
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
