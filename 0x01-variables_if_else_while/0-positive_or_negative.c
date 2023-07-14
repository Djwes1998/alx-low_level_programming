#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* generating random numbers  the checking weather  its +ve or -ve
 *
 * betty style doc for function main goes there 
 *
 * return:alway (0)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

        if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);    

	return(0);
}
