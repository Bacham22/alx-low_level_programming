#include "main.h"

int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return 1; // Character is lowercase
    else
        return 0; // Character is not lowercase
}
