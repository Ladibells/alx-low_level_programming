#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - main block
 *Return: 0  success (always)
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);

	for (i = 97; i <= 102; i++)
		putchar(i);

	putchar(10);
	return (0);
}
