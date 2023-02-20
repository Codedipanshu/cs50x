#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string s);
int count_words(string s);
int count_sentences(string s);

int main(void)
{
    // Getting input from user
    string text = get_string("Text: ");

    // Assigning counting
    float letters = count_letters(text);
    float words = count_words(text);
    float sentences = count_sentences(text);

    // calculating per 100 words
    float L = letters / words * 100;
    float S = sentences / words * 100;

    // Coleman-Liau index formula
    float index = 0.0588 * L - 0.296 * S - 15.8;

    // roundoff index
    int n = round(index);

    // printing results
    if (n > 1 && n < 16)
    {
        printf("Grade %i\n", n);
    }
    else if (n <= 1)
    {
        printf("Before Grade 1\n");
    }
    else if (n >= 16)
    {
        printf("Grade 16+\n");
    }
}

// counting letters
int count_letters(string s)
{
    int counter = 0;
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (isalpha(s[i]))
        {
            counter++;
        }
    }
    return counter;
}

// counting words
int count_words(string s)
{
    int counter = 1;
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] == ' ')
        {
            counter++;
        }
    }
    return counter;
}

// counting sentences
int count_sentences(string s)
{
    int counter = 0;
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if ((s[i] == '.') || (s[i] == '!') || (s[i] == '?'))
        {
            counter++;
        }
    }
    return counter;
}