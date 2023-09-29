#include<stdio.h>
#include<ctype.h>

int main(void)
{

    printf("ctype library showcase:\n\n");
    printf("isalnum();\nis it alphanumeric \n\n");


    printf("testing: a\n");
    if (isalnum('a')) printf("true\n\n");
    else printf("false\n\n");

    printf("testing: Z\n");
    if (isalnum('Z')) printf("true\n\n");
    else printf("false\n\n");

    printf("testing: 8\n");
    if (isalnum('8')) printf("true\n\n");
    else printf("false\n\n");

    printf("testing: &\n");
    if (isalnum('&')) printf("true\n\n");
    else printf("false\n\n");

    printf("similar functions: \n\n");
    printf("isalpha();\nIs this an alphabetical character\n\n");
    printf("islower();\nIs this lowercase\n\n");
    printf("isupper();\nIs this uppercase\n\n");
    printf("ispunct();\nIs this punction\n\n");
    printf("isspace();\nIs this white space\n\n"); // a single space, \t (tab), \n (newline) etc...
    printf("isdigit();\nIs this a digit\n\n");
    printf("isxdigit();\nIs this a hexadecimal digit\n"); // 0-9, a-f, A-F

    printf("\n");
    printf("**************************************************************************\n");
    printf("\n");

    printf("iscntrl();\nIs it a control character(a non printable character)\n\n");

    printf("testing: newline\n");
    if (iscntrl('\n')) printf("true\n\n");
    else printf("false\n\n");

    printf("similar functions: \n\n");
    printf("isprint();\nIs this printable(not control characters)");

    printf("\n");
    printf("**************************************************************************\n");
    printf("\n");

    printf("isgraph();\nCan this be represented with a graph\n\n");

    printf("testing: 5\n");
    if (isgraph('5')) printf("true\n\n");
    else printf("false\n\n");

    printf("testing: space\n");
    if (isgraph(' ')) printf("true\n\n");
    else printf("false\n\n");

    printf("\n");
    printf("**************************************************************************\n");
    printf("\n");

    printf("tolower();\nforces lower case\n\n");
    printf("&\n\n");
    printf("toupper();\nforces upper case\n\n");


    printf("testing: A\n");
    char c = tolower('A');
    printf("c: %c\n\n", c);

    printf("testing: a\n");
    printf("c: %c\n\n", c = toupper('a'));

    return 0;
}
