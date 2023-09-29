#include<stdio.h>

// typedef(aliasing) demo

typedef int kilometer;

int main(void)
{

    kilometer newyork, chicago, miami;

    newyork = 300;
    chicago = 500;
    miami = 1900;

    printf("new york: %d\n",newyork);
    printf("chicago: %d\n",chicago);
    printf("new york: %d\n",miami);

    return 0;
}
