#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Successful)
*/

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar(10);

	return (0);
}
