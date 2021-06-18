#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
	char achar;
	int aint;
	long along;
	long long allong;
	float afloat;

	print("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(achar));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(aint));
	printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(along));
	printf("Size of a long long int: %d byte(s)\n", sizeof(allong));
	printf("Size of a float: %d byte(s)\n", sizeof(afloat));
	return (0);
}
