#include <stdio.h>
#include <stdlib.h>


int main () {

    int favNum = 1000000;
    char xter = 'i';
    printf("hello\nWorld\n"); //printf is a FUNCTION -its task is to print the task on the terminal
    
    //%s represents a string, 
    //%d reps integer
    //%f reps a decimal no
    //%c reps a chacter
    printf("My favorite %s is %d\n", "number", 500); //use a format specifier to type special datatypes e.g %d
    printf("My favorite %s is %f\n", "number", 50.9876);
    printf("I want to make %d shillings\n", favNum);
    printf("increment amount %c\n", xter);
    return 0;
}