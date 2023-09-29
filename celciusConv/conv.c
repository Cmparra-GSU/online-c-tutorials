#include <stdio.h>

double convert(double temp);

int main(void)
{
    double temp1=1, temp2=59, temp3 = 4;
    printf("Temp 1 = %.2lf in Fahrenheit", convert(temp1));
}

double convert(double temp)
{
    double con = 1.8;
    double convert = (con * temp) + 32;
    return convert;
}
