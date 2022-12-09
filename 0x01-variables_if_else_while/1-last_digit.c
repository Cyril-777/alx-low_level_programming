#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	int n, lastdgit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdgit = n % 10;
	if (lastdgit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdgit);
	else if (lastdgit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastdgit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdgit);
	return (0);
}
