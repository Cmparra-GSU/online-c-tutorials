#include<stdio.h>
#include<string.h>
//struct tutorial

struct Student
{
    char name[50];
    char id[10];
    int age;
    int grades[20];
};


int main(void)
{
    struct Student kevin;

    kevin.age = 40;
    strcpy(kevin.name, "Kevin");
    strcpy(kevin.id, "000123123");

    kevin.grades[0] = 1;
    kevin.grades[1] = 2;
    kevin.grades[2] = 3;
    kevin.grades[3] = 4;
    kevin.grades[4] = 5;

    printf("Name: %s\n", kevin.name);
    printf("ID: %s\n", kevin.id);
    printf("Age: %d\n", kevin.age);
    printf("Grades: ");

    for(int i = 0; i< 5; i++)
    {
        printf("%d ", kevin.grades[i]);
    }


    return 0;
}
