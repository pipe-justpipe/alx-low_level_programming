#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Desciption: 'The last digit'
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n, rem;


	srand(time(0));
	n = rand() - RAND_MAX / 2;

	rem = n % 10;
	if (rem > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, rem);
	}
	if (rem == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, rem);
	}
	else if (rem < 6 && n % 10 != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rem);
	}
	return (0);

}
