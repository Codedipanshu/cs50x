#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // Confirms there are two arguments included to run the program
    if (argc == 2)
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            // Check for alphabates in key
            if (isalpha(argv[1][i]) == false)
            {
                printf("Key must contain 26 characters.\n");
                return 1;
            }
            // Iterates on the key in command line and ensures it is containing 26 characters
            else if (strlen(argv[1]) != 26)
            {
                printf("Key must contain 26 characters.\n");
                return 1;
            }
            // Check for duplicate characters
            for (int j = i + 1, m = strlen(argv[1]); j < m; j++)
            {
                if (toupper(argv[1][j]) == toupper(argv[1][i]))
                {
                    printf("Key must contain 26 characters.\n");
                    return 1;
                }
            }
        }

        string k = argv[1];
        // defining ideal
        string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

        string p = get_string("plaintext: ");
        printf("ciphertext: ");

        // Reads the plaintext and converts it it ciphertext
        for (int i = 0, n = strlen(p); i < n; i++)
        {
            // Converts all the lower letter alphabets
            if (p[i] >= 'a' && p[i] <= 'z')
            {
                for (int j = 0, m = strlen(alpha); j < m; j++)
                {
                    if (toupper(p[i]) == alpha[j])
                    {
                        printf("%c", tolower(k[j]));
                    }
                }
            }
            // Converts all the upper letter alphabets
            else if (p[i] >= 'A' && p[i] <= 'Z')
            {
                for (int j = 0, m = strlen(alpha); j < m; j++)
                {
                    if (p[i] == alpha[j])
                    {
                        printf("%c", toupper(k[j]));
                    }
                }
            }
            // Returns any character other thatn alphabets as such
            else
            {
                printf("%c", p[i]);
            }
        }
        printf("\n");
        return 0;
    }
    // Returns an error message if the code isn't executed in proper format
    else
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
}