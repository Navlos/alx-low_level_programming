#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *  print value of n
 *  Return 0
   */

/* betty style doc for function main goes there */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* my code here */
				   if (n > 0)
					   		printf("%i is positive\n", n);
				   	else if (n == 0)
								printf("%i is zero\n", n);
						else
									printf("%i is negative\n", n);

							return (0);
					return (0);
}
