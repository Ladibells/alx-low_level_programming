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

	for (i = 48; i <= 57; i++){
		int j;

		for (j = 48; j <= 57; j++)
			putchar(i);
			putchar(j);
			putchar(44);
			putchar(32);
	}

	return (0);
}
