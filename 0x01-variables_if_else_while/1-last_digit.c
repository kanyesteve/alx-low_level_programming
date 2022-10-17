#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-program entry point
 * Return o if no erroe, non zero value if erroe
 */
int main(void)
{
	int n;
	int 1digit

	srand(time(o));
	n = rand() - RAND_MAX/2;
	1digit = n % 10;
	if (1digit > 5)
	{
		printf("LAst gigit of %d and is greater that 5\n", n, 1digit);
	}
	else if (1digit == 0)
	{
		printf("Last digit of %d and is 0\n", n, 1digit);
	}
	else if (ldigit < 6 && ldigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldigit);
	}
	return (0);
}
