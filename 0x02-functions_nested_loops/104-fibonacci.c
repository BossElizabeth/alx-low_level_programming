#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long fib1 = 1, fib2 = 2, sum;

	printf("%lu, %lu, ", fib1, fib2);

	for (count = 2; count < 98; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		if (count != 97)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}

		fib1 = fib2;
		fib2 = sum;
	}

	return (0);
}
