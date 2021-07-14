#include <stdio.h>

/**
 * main - entry block
 * return: always 0 (success)
 */

int main (void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	
	putchar(10);
	return (0);
}
