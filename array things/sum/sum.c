#include <stdio.h>
int sum(int array[], int length);
int main(void)
{
    int array[] = {1,2,3,4,5,6};
    int array2[] = {111,222,333,444,555,666};
    int array3[] = {-1,2,-3,4,5,-6};
    printf("Sum of the array: %d\n", sum(array, 6));
    printf("Sum of the array2: %d\n", sum(array2, 6));
    printf("Sum of the array3: %d\n", sum(array3, 6));
    return 0;
}

int sum(int array[], int length)
{
    int sum = 0;
    for(int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum;
}
