#include <stdio.h>
#include <unistd.h>
#include <unistd.h>

/**
 * main - Entry point
 * description: 'and that piece of art is useful" - Dora Korpar, 2015-10-19'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int s = strlen("and that piece of art is useful - Dora Korpar, 2015-10-19\n");

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", s);
	return (1);
}
