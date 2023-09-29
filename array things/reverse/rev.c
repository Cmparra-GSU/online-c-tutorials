#include <stdio.h>

int reverse(int arr[]);

int main(void)
{
    int arr[] = {5,4,3,2,1};

    reverse(arr);
}

int reverse(int arr[])
{
    int temp = 0, i = 0, j = 4;

    for(i = 0; i < (5/2) ; i++)
    {
        temp = arr[j];
        arr[j] = arr[i]; // double check youtube video he uses myarra[length- i - 1];
        arr[i] = temp;
        j--;
        printf("Array: %d\n", arr[i]);
    }
}
