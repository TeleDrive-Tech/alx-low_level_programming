#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            for (int k = j + 1; k < 10; k++)
            {
                putchar(i + '0');
                putchar(j + '0');
                putchar(k + '0');

                if (i < 7) // Check if it's not the last combination
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');

    return 0;
}
