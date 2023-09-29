#include <stdio.h>



int main(void)
{

    double F = 0;
    double C = 0;

    double start = 0;
    double end = 0;
    double step = 0;

    double con = 1.8;

    printf("Enter beginning temp: \n");
    scanf("%lf", &start);

    printf("Enter end temp: \n");
    scanf("%lf", &end);

    printf("Enter step rate: \n");
    scanf("%lf", &step);

    printf("\n");

    for (C = start; C<= end; C+= step)
    {

        F = (con * C) + 32;
        printf("%8.2lf %8.2lf\n", C, F);

    }

    return 0;
}
