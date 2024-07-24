#include <stdio.h>
#include <stdlib.h>

int main () {

    int age = 30;
    int *pAge = &age;

    printf("%d", *&age); //it gonna be an integer because the memory adress is storing the value of an integer

    return 0;
}