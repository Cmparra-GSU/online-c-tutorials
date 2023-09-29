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

    for (int i = 0; i < length; i++)
    {
        printf("%d", fib(i));
        if( i != (length -1)) printf(",");
        else printf("\n");

    }

    return 0;

}

int fib(int n)
{
    if (n>1) return fib(n-1) + fib(n-2);
    else if (n == 1) return 1;
    else if (n ==0) return 0;
    else
    {
        printf("Error: n must be >=0");
        return -1;
    }
}
