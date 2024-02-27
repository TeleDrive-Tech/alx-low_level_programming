#include <stdio.h>

int main() {
    // Loop through the single-digit numbers from 10 to 99
    for (int i = 10; i < 100; i++) {
        // Print the current digit
        putchar(i + '0');

        // Check if the current digit is not the last digit
        if (i < 99) {
            // Print the separator ", " using putchar
            putchar(',');
            putchar(' ');
        }
    }
    putchar(10);
    return 0;
}
