#include<stdio.h>

int main(void)
{
    int i = 0;

    i++;

    printf("i: %d\n", i);

    i--;

    printf("i: %d\n", i);

    ++i;

    printf("i: %d\n", i);

    --i;

    printf("i: %d\n", i);

    printf("i++: %d\n", i++);

    printf("i after the last i++: %d\n", i);

    printf("++i: %d\n", ++i);

    printf("++i, prefix operators, do the operation first before they are used as the argument.\n");

    printf("i++, post operators, do the operation after they are used as the argument.\n");

    printf("example: \n");

    i = 0;
    int result = 0;

    result = i++ * 10;

    printf("Result: %d\n", result);

    printf("i: %d\n", i);

    printf("since using postfix does the increment after the operation, its first 0, and then afterwards becomes one.\n");

    printf("so, you can use prefix operators if you need to increment before the operation\n");


    return 0;
}
