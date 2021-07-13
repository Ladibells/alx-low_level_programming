#include <stdio.h>

/**
*main - entry code
*return: 0 always (success)
*/

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
