#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 *  * main -Entry point
 *   * Description: 'New project for checking if a file is positive or negative'
 *    * Return: Always 0 (success)
 *    */
/* betty style doc for function main goes there */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there*/
					if (n > 0)
								printf("%d is positive\n", n);
						if (n == 0)
									printf("%d is zero\n", n);
							if (n < 0)
										printf("%d is negative\n", n);
								return (0);
}
