#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Successful)
*/
int main(void)
{
	for (int i = 0; i < 10; i++)
		{
		for (int j = i; j < 10; j++)
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar (10);
	return (0);
}