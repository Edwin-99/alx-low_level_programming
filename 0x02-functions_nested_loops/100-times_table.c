#include "main.h"

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to print
 */

int _putchar(char c)
{
    /* Your _putchar implementation goes here */
    return write(1, &c, 1);
}

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */

void print_number(int n)
{
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    if (n / 10 != 0)
        print_number(n / 10);

    _putchar((n % 10) + '0');
}

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number for which the times table is printed
 */

void print_times_table(int n)
{
    if (n < 0 || n > 15)
        return; // Don't print anything if n is out of range

    int i, j, product;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            product = i * j;

            if (j != 0)
            {
                _putchar(',');
                _putchar(' ');
                if (product < 10)
                    _putchar(' ');
            }

            print_number(product);
        }
        _putchar('\n');
    }
}

