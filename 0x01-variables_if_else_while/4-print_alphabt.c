#include <stdio.h>

/**
 *main - entry point
 *
 * return: 0 always (success)
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{

		if (i == 113 || i == 101)
			continue;
		putchar(i);
		putchar(10);
	}
	
	return (0);
}
