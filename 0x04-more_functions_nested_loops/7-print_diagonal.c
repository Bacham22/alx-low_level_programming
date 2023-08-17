#include "main.h"

void print_diagonal(int n)
{
    int spaces;

    if (n <= 0)
    {
        _putchar('\n');
        return;
    }

    for (spaces = 0; spaces < n; spaces++)
    {
        int i;

        for (i = 0; i < spaces; i++)
            _putchar(' ');
        _putchar('\\');
        _putchar('\n');
    }
}
