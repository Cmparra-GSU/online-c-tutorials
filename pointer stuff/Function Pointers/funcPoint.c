#include <stdio.h>
// a demo of how function pointers work


void function(int x)
{
    printf("x: %d\n", x);
}

double add(double x, double y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int divide(int x, int y)
{
    return x / y;
}

int main()
{
    // lines 33 -> 37 show a simple function pointer that just prints the value
    void(*function_pointer)(int);

    function_pointer = & function;
    // here is the dereference, passing the value of 4 to the function
    (*function_pointer)(4);

    // the rest of this is showing how we can do many things with function pointers
    double (*add_pointer)(double, double) = add;

    double a = 20;
    double b = 30;

    double result = add_pointer(a,b);
    printf("result %f\n", result);

    // this parts cool, we're storing the function pointers in an array, so we can easily call them
    // this is expanded on in the funcPointCalc.c tutorial

    int (*array[])(int, int) = {subtract, multiply, divide};

    int product = (*array[1])(3,15);

    printf("product: %d\n", product);



    return 0;
}
