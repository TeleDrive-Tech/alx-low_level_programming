#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Successful)
 */

int main(void)
{
    char hex_digit;

    for (hex_digit = '0'; hex_digit <= '9'; hex_digit++)
    {
        putchar(hex_digit);
        if (hex_digit != '9')  // Avoid printing newline after '9'
            putchar(',');
    }

    for (hex_digit = 'a'; hex_digit <= 'f'; hex_digit++)
    {
        putchar(hex_digit);
        if (hex_digit != 'f')  // Avoid printing newline after 'f'
            putchar(',');
    }

    putchar('\n');

    return (0);
}
