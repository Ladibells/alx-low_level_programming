#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative or zero
 * return: 0 always (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX/2;

	if (n > 0)
	{
		printf("is positive\n");
	}

	else if (n == 0)
	{
		printf("is zero\n");
	}
	
	else
	{
		printf("is negative\n");
	}

	return (0);
}
