#include <stdio.h>
#include <stdlib.h>

//a pointer is type of a variable just like an integer, just a memory adress
int main () {

    int age = 30;
    int * pAge = &age; //this pointer variable is storing the memory adress of age variable. must start with * then p
    double gpa = 3.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;
    
    printf("age's memory adress: %p\n", &age);
}