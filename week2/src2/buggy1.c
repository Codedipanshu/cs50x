// Buggy example for debug50

#include <stdio.h>
#include <cs50.h>

int get_negative_int(void);

int main (void)
{
    int i = get_negative_int();
    printf("%i\n", i);
}

// Prompt user for negative integer
int get_negative_int(void)
{
    int n;
    do
    {
        n = get_int("Negative Integer: ");
    }
    while (n > 0);
    return n;
}