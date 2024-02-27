#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Successful)
 */

int main(void)
{
    int i;
    for (i = 10; i < 100; i++)
    {
        putchar('0' + i);
    }
    if (i < 100)
    {
        putchar(',');
        putchar(' ');
    }
    putchar (10);

    return (0);
}
