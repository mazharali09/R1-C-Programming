#include <stdio.h>
#include <string.h>

typedef struct student{
    char name[20]; // we can chose any length 
    char ID[20];   // we can use any length
    int age;
}student;

int main(){
    student student1;
    strcpy(student1.name, "Ahmed");
    strcpy(student1.ID, "2023ahmed1234");
    student1.age = 22;

    printf("age of %s is %d and his/her ID is %s \n", student1.name, student1.age, student1.ID);

    return 0;
}
