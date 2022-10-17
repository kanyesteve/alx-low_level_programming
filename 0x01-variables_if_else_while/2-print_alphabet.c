#include <stdio.h>
/**
 * main-program entry point.
 * return: 0 if no erroe, non-zero if erroe
 * **/
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
