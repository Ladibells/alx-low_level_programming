#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	for(i = 0;dest[i] != '\0'; i++);
	for(j = 0;sr[j] != '\0'; j++, i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
