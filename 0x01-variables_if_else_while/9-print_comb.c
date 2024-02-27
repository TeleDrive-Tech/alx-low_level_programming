#include <stdio.h>
/**
 *main - Entry Point
 *Description: Write a program that prints all possible
 *combinations of single-digit numbers.
 *Return: 0 (sucessful)
 */
int main(void)
{
	int c = 0;

	for (; c < 10; c++)
	{
		putchar('0' + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
