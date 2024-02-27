#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Successful)
*/

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
		alphabet++;
	}

	putchar('\n');

	return (0);
}
