#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 100; i++)
    {
        for (int j = i; j < 100; j++)
        {
            putchar(i / 10 + '0');
            putchar(i % 10 + '0');
            putchar(' ');
            putchar(j / 10 + '0');
            putchar(j % 10 + '0');

            if (i < 99) // Check if it's not the last combination
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return 0;
}
