//storing diffrent data types in 1 single structure

#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[50];
    char course[50];
    int age;
    double meanGrade;
};

int main () {
struct Student Student1;
{
    Student1.age = 22;
    Student1.meanGrade = 88.2;
    strcpy(Student1.name, "Bensoli");
    strcpy(Student1.course, "Computer Science");

};

struct Student Student2;
{
    Student2.age = 23;
    Student2.meanGrade = 89.2;
    strcpy(Student2.name, "Musili");
    strcpy(Student2.course, "Computer Science");

};

printf("Name: %s\n", Student1.name);
printf("Mean Grade: %f\n", Student1.meanGrade);
printf("Age: %d\n", Student1.age);

printf("Name: %s\n", Student2.name);
printf("Mean Grade: %f\n", Student2.meanGrade);
printf("Course: %s", Student2.course);


    return 0;
}