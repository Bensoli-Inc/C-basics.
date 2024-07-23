#include <stdio.h>
#include <stdlib.h>

int main() {

    char name[] = "bensoli";
    int age = 24;
    printf("There was a man named %s \n", name);
    printf(" he was %d years old\n", age);

    age = 30;
    printf("he really liked the name %s\n", name);
    printf("but did not like being %d\n", age);

    return 0; 
}