#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (successful)
*/
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = k + 1; l < 10; l++)
				{
					putchar(i + '0');
					putchar(k + '0');
					putchar(' ');
					putchar(l + '0');
					putchar(j + '0');
					;

					if (i < 10)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar(10);

	return (0);
}
