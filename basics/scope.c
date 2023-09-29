#include<stdio.h>
// an explanation on variable scope

int y = 3; // this is giving the variable y global scope, also called file scope, it can be called from any function
// if i wrote int x = 2, the local variables would take precedence

void func();

int main(void)
{
    int x = 5;

    printf("x: %d\n", x);
    printf("Currently, the variable has the scope of the main function\nYou could say it is a local variable or that it has function scope\n");
    printf("its also worth noting that a variables scope begins after its declaration.\n\n");
    func();

    printf("Block Scope: \n\n");
    {
        int z = 2;
        printf("z: %d\n", z);
        printf("z can be called from within this block, but it exists only in here\nSeen commonly in things like for, while, etc...\n\n");

    }

    printf("It should also be noted that function parameters\nFor example:\nvoid func(int a)\nWill have a local scope\n");

    return 0;
}

void func()
{
    printf("Lets say we called x to be printed in this function\n;\nThis would cause an error, since x only has scope within its function\n\n");

    int x = 8;
    printf("Now that we've declared an x within this function, we can call x\nBut, it isn't the same x from the main function.\n\n");
}
