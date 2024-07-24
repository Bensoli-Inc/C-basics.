#include <stdio.h>
#include <stdlib.h>

void sayHi(char name[], int age);

int main() {
    
    sayHi("Bensoli", 23); //call the functiom 
    sayHi("Musili", 24);
    sayHi("Alex", 23.5);
    return 0;
}

//a function outside the main function
//tell c the type of data the function should return to the user
//void, function that wont return any info to ur program

void sayHi(char name[], int age) {    //parameter

printf("Hello %s\n", name);
printf("You are %d years old\n", age);
}