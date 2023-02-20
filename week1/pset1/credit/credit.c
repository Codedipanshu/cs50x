#include <cs50.h>
#include <stdio.h>

int count_length(long n);
int checksum(long cc);

int main(void)
{
    // Get Card Number
    long cc = get_long("Number: ");

    // Count length
    int i = count_length(cc);

    // Check if length is valid
    if (i != 13 && i != 15 && i != 16)
    {
        printf("INVALID\n");
        return 0;
    }

    // Calculate Checksum
    int total = checksum(cc);

    // Check Luhn Algorithm
    if (total % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    // Get Starting Digits
    long start = cc;
    do
    {
        start = start / 10;
    }
    while (start > 100);

    // Check for Card Type
    if ((start / 10 == 5) && (0 < start % 10 && start % 10 < 6))
    {
        printf("MASTERCARD\n");
    }
    else if ((start / 10 == 3) && (start % 10 == 4 || start % 10 == 7))
    {
        printf("AMEX\n");
    }
    else if ((start / 10 == 4))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}

int count_length(long n)
// Count length
{
    int x = 0;
    while (n > 0)
    {
        n = n / 10;
        x++;
    }
    return x;
}

int checksum(long x)
// Calculate Checksum
{
    int sum1 = 0;
    int sum2 = 0;
    int mod1;
    int mod2;
    int d1;
    int d2;

    do
    {
        // Remove last digit and add to sum1
        mod1 = x % 10;
        x = x / 10;
        sum1 += mod1;

        // Remove second last digit
        mod2 = x % 10;
        x = x / 10;

        // Double second last digit and add digits to sum2
        mod2 = mod2 * 2;
        d1 = mod2 % 10;
        d2 = mod2 / 10;
        sum2 += d1 + d2;
    }
    while (x > 0);
    int total = sum1 + sum2;
    return total;
}
