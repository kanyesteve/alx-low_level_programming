#include <stdlib.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-program entry point
 * Return 0-no error; non-sero value if no error
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rad() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
		printf("%d is zero\n", n);
	return (0);
}
}
