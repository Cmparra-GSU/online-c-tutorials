#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>


bool check_anagram(char *w1, char *w2);

int main()
{

    char w1[] = "Listen";
    char w2[] = "Silent";

    if(check_anagram(w1,w2))
        printf("Anagrams\n");
    else
        printf("Not Anagrams\n");

    return 0;
}

bool check_anagram(char *w1, char *w2)
{

    int len1 = strlen(w1);
    int len2 = strlen(w2);

    // we achieve this by checking the number of each letter in each string
    // so if there are an equal number of each letter, its an anagram
    // we can use ascii values, since lowercase a starts at 97, subtract the value of a (97) from whatever character
    // example a = 97, f = 102. 102 - 97 = 5, abcdef, f is the fifth character, we can use this to fill out the array

    int w1lc[26] = {0};
    int w2lc[26] = {0};

    for (int i = 0; i < len1; i++)
    {
        // lowercase
        int lower = tolower(w1[i]);
        // this is the shift, and then increments that value in the array
        w1lc[ lower - 'a' ]++;
    }

    // and now the same thing but for a the second word

    for (int i = 0; i < len2; i++)
    {
        int lower = tolower(w2[i]);
        w2lc[ lower - 'a' ]++;
    }

    for ( int i = 0; i < 26; i++)
    {
        if (w1lc[i] != w2lc[i]) return false;
    }

    return true;
}
