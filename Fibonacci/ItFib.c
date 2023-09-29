#include <stdio.h>

int main (void)
{
    int term1 = 0;
    int term2 = 1;
    int fibn = 0;
    int length = 0;

    do
    {
        printf("enter sequence length: \n");        // doing this so the input is greater than or equal to three since fib(2) is just 1.
        scanf("%d", &length);
        if (length < 3)
            printf("length must be >=3\n");
    } while (length < 3);

    printf("%d,%d,", term1, term2);

    for (int i = 2; i < length; i++)
    {
        fibn = term1 + term2;
        printf("%d", fibn);
        term1 = term2;
        term2 = fibn;
        if( i!= (length -1)) printf(",");
        else printf("\n");
    }

    return 0;

}
