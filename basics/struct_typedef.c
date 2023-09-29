#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//struct with typedef tutorial
//it just makes the code a little cleaner

typedef struct
{
    char name[50];
    char id[10];
    int age;
    int grades[20];
}Student;
//that up there just gives the alias for this struct
//now instead of calling struct Student, we can just call Student

typedef struct
{
    int x; int y;
}Point;

typedef struct
{
    int *array;
}data;

void print_student(Student student);
void print_point(Point point);
void print_arr(Point *point);

int main(void)
{
    Student kevin;

    kevin.age = 40;
    strcpy(kevin.name, "Kevin");
    strcpy(kevin.id, "000123123");

    kevin.grades[0] = 1;
    kevin.grades[1] = 2;
    kevin.grades[2] = 3;
    kevin.grades[3] = 4;
    kevin.grades[4] = 5;

    print_student(kevin);

    // can assign values in the order they're listed in the struct itself
    Point p1 = {5, 10};
    print_point(p1);

    // can also do it like this, order won't matter this way
    // for example you could also do
    // point p2 = {.y = 15, .x = 3);
    Point p2 = {.x = 3, .y = 15};
    print_point(p2);

    // its worth noting that you don't have to keep it all in one line when defining the values
    // its useful for large structs
    // for example:
    /* Point p2 = {.x = 3,
                   .y = 15};
    */

    // you can also assign the values of one struct to another(memcpy more or less)
    p1 = p2;
    print_point(p1);

    //we can also use arrays of structs

    Point points[10];

    for (int i = 0; i < 10; i++)
    {
        points[i].x = i;
        points[i].y = 10 - i;
    }

    print_arr(points);

    data x; data y;

    //malloc recap: this is letting us store 5 integers
    x.array = malloc(sizeof(int)*5);
    y.array = malloc(sizeof(int)*5);

    x.array[0] = 1;
    x.array[1] = 2;
    x.array[2] = 3;
    x.array[3] = 4;
    x.array[4] = 5;

    y.array[0] = 9;
    y.array[1] = 9;
    y.array[2] = 9;
    y.array[3] = 9;
    y.array[4] = 9;

    // heres the problem with using pointers
    // since the struct is a pointer to the array, and not the array itself
    //this assignment is just going to copy the pointer to the array that y is holding
    x = y;
    // printing this will look like it assigned the values from the original x array

    for (int i = 0; i < 5; i++)
    {
        printf("x.array[%d] = %d\n", i, x.array[i]);
    }
    // but it really just changed the pointer to the y array
    // the x array still exists but the x variable points to the y array
    // this is because the assignment x = y; is like a memcpy
    // so the pointer is just being copied
    // if we went on to modify x again, it would actually modify the y array.

    return 0;
}

void print_student(Student student)
{
    printf("Name: %s\n", student.name);
    printf("ID: %s\n", student.id);
    printf("Age: %d\n", student.age);
    printf("Grades: ");

    for(int i = 0; i< 5; i++)
        printf("%d ", student.grades[i]);
    printf("\n");printf("\n");
}

void print_point(Point point)
{
    printf("x: %d\n", point.x);
    printf("y: %d\n", point.y);
    printf("\n");
}

void print_arr(Point *point)
{
    for (int i = 0; i < 10; i++)
    {
        printf("p%d = (%d,%d)\n", i, point[i].x,
                                     point[i].y);
    }

}
