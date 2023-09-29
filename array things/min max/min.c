#include <stdio.h>
int find_min(int array[], int length);
int main(void)
{
    int arr1[] = {22, 55, 29, 32, 3001, 88, 3, 44};
    int arr2[] = {333, 25, 23, 366, 323, 65135, 12, 44};

    int min1 = find_min(arr1, 8);
    int min2 = find_min(arr2, 8);

    printf("min1 is: %d\n", min1);
    printf("min2 is: %d\n", min2);
    return 0;
}

int find_min(int arr[], int length)
{
    int i = 0, min = arr[i];
    for (i = 1; i <length; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
