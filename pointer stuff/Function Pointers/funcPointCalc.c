#include <stdio.h>
#include <stdbool.h>

// expanding on funcPoint.c to help understand how function pointers may be used


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


bool freeze_C(int temperature)
{

    if (temperature <= 0) return true;
    else return false;

}

bool freeze_f(int temperature)
{

    if (temperature <= 32) return true;
    else return false;

}

void is_freezing(bool(*freeze_check)(int))
{
    int temperature = 0;
    printf("Enter Temperature: ");
    scanf("%d", &temperature);

    if(freeze_check(temperature))
        printf("It's freezing.\n");
    else
        printf("It's Not.\n");
}

// this lets the user select exactly which operation they want to run

int (*select_operation())(int, int)
{
    int option = 0;
    printf("Select an Operation\n");
    printf("1) Add\n");
    printf("2) Subtract\n");
    printf("3) Multiply\n");
    printf("4) Divide\n");
    printf("Enter: ");
    scanf("%d", &option);

    if (option = 1) return add;
    else if (option = 2) return subtract;
    else if (option = 3) return multiply;
    else if (option = 4) return divide;
    else return NULL;

}

int main()
{

    /*int (*operation)(int, int) = select_operation();

    printf("answer: %d\n", operation(20,5));
    */

    void (*fucntion_pointer)(int);
    function_pointer = &function;

    printf("celsius...\n\n");
    is_freezing(freeze_f);
    is_freezing(freeze_f);

    return 0;
}
