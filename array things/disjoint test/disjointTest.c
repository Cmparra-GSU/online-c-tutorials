#include<stdio.h>
#include<stdbool.h>

// testing if two arrays are disjoint, in other words, checking if they contain any of the same elements
// disjoint means they're totally uniquely filled arrays

bool is_disjoint(int a1[], int l1, int a2[], int l2);

int main(void)
{
    int array1[] = {1,3,5,7,9};
    int array2[] = {2,3,6,8,10};

    if(is_disjoint(array1,5,array2,5))
        printf("Disjoint\n");
    else
        printf("Not Disjoint");

    return 0;
}

bool is_disjoint(int a1[], int l1, int a2[], int l2)
{

    for (int i = 0; i < l1; i++)
    {
        for (int j = 0; j< l2; j++)
        {
            if (a1[i] == a2[j])
            return false;
        }
    }

    return true;
}
