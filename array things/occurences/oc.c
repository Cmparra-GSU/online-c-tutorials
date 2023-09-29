#include <stdio.h>

int findOc(int num, int arr[]);

int main(void)
{
    int num = 0;
    printf("Enter number: \n");
    scanf("%d",&num);

    int arr[] = {1, 2, 3, 4, 2, 3, 4, 1, 2, 3, 1, 2, 1, 2, 3, 4, 1, 2, 3, 4};

    int oc = findOc(num, arr);
    printf("The occurences of %d is %d", num, oc);
}

int findOc(int num, int arr[])
{
    int oc = 0;
    int i;
    for (i = 0; i < 20; i++)
    {
        if(arr[i]==num)
            oc++;
    }
    return oc;
}
