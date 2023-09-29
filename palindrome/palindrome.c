#include <stdio.h>
#include <string.h>
#include <stdbool.h>



bool is_palindrome(char string[]);

int main(void)
{
    char string1[] = "not a palindrome!";
    char string2[] ="abccba";
    char string3[] ="abcdcba";

    if (is_palindrome(string1))
    {
        printf("yes, %s, is a palindrome\n", string1);
    }

    if (is_palindrome(string2))
    {
        printf("yes, %s, is a palindrome\n", string2);
    }
    if (is_palindrome(string3))
    {
        printf("yes, %s, is a palindrome\n", string3);
    }

    else
    {
        printf("no dromes\n");
    }
}

bool is_palindrome(char string[])
{
    int len = strlen(string);
    int middle = strlen(string) / 2;
    for (int i = 0; i < middle; i ++)
        if(string[i] != string[len - i - 1])
            return false;
    return true;
}
