#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	{
		printf("Last digit of %d and is %d and is greater than 5\n", n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d and is %d and is less than 6 and not 0\n", n, a);
	}
	else
	{
		printf("Last digit of %d and is %d and is less than 6 and not 0\n", n, a);
	}
	return (0);
}
