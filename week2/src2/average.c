#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Numbers: ");
    float score[n];
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        score[i] = get_float("score %i: ", i+1);
    }
    for (int i = 0; i < n; i++)
    {
        sum += score[i];
    }
    printf("Average: %0.2f\n", sum/(float)n);
}