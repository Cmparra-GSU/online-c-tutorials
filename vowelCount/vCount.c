#include <stdio.h>
#include <string.h>

int vowel_count(char *s);

int main(void)
{
    char s1[] = "It's a wonderful life!";

    int vcount = vowel_count(s1);

    printf("Vowels: %d\n", vcount);
    return 0;
}

int vowel_count(char *s)
{
    int count = 0;

    for(int i = 0; i < strlen(s); i++)
    {
        switch (toupper(s[i]))
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':

            count++;
        }
    }

    return count;
}
