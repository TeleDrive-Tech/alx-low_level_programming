#include <stdio.h>

int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        putchar(i + '0');  // Print the current digit

        if (i < 9)
        {
            putchar(',');   // Print the comma
            putchar(' ');   // Print the space
        }
    }

    putchar('\n');  // Print a newline character

    return 0;
}
