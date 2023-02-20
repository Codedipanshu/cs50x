// Problem Set 1
#include <cs50.h>
#include <stdio.h>

int main(void)
{
// Prompt user for Height
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

// Printing Block
    for (int i = 0; i < n; i++)
    {
// Printing Left Alinged Block
        for (int j = n; j > i + 1; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }
// Space between both blocks
        printf("  ");
/// Printing Right Alinged Block
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}