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

	for (i = 122; i >= 97; i--)
		putchar(i);

	putchar(10);
	return (0);
}
