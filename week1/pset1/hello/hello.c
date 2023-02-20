// Problem Set 1

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for name
    string name = get_string("What is your name?\n");

    // Say Hello to user
    printf("Hello, %s\n", name);
}