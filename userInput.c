#include <stdio.h>
#include <stdlib.h>

//HOW TO TAKE INFO FROM USER AND STORE inside a variable to use inside a program

int main() {
    // int age; //declare but dont give value
    // printf("Enter your age: \n");
    // scanf("%d", &age); // (pointer) allow get info from user. uSE ARMPERSAND  before the variable name
  
    // printf("you are %d years old\n", age);
    // return 0; 


    char name[20]; //specify max no of chacters
    printf("Enter your name: \n");
    scanf("%s", name);
    printf("your name is %s", name);
}

//for strings
