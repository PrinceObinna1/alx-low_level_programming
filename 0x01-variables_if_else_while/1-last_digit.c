#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the last digit of a randomly generated number
 * Return: Always 0
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5;

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
