#include <stdio.h>

int main(void)
{
    double array1[] = {1, 2, 3, 4, 5};
    printf("Average is %d\n", average(array1, 5));
    return 0;
}

int average(double array[], int length)
{
    double sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum+= array[i];
    }
    return sum / length;
}
