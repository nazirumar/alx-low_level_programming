#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
		int n;

<<<<<<< HEAD


		srand(time(0));
				n = rand() - RAND_MAX / 2;
					if (n > 0)
								printf("%i is positive\n", n);
						else if (n < 0)
									printf("%i is negative\n", n);
							else
										printf("%i is zero\n", n);
=======
		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (n > 0)
			printf("%i is positive\n", n);
		else if (n < 0)
			printf("%i is negative\n", n);
		else
		printf("%i is zero\n", n);
>>>>>>> 3396631b3ad7be3b67c006794c844beae2e5599c

		return (0);
}

