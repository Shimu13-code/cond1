#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("Number: ");

    if (n > 0)
    {
        printf("%i is positive.\n", n);
    }
    else if (n < 0)
    {
        printf("%i is negative.\n", n);
    }
    else
    {
        printf("%is zero.\n", n);
    }

    return 0;
}
