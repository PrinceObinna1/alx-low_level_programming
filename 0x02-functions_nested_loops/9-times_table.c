#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{

	for (j = 0; j <= 9; j++)

	{
	putchar((i * j) / 10 + '0');
	putchar((i * j) % 10 + '0');

	if (j != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	}
}



































