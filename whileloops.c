//looping over code until a certain condition is false

#include <stdio.h>
#include <stdlib.h>

int main () {

    int index = 1;
    while(index<=5) {
        printf("%d\n", index);
        index++; //index = index+1 (increment)
    }

     int index = 6;
    do {   //do while first  does the output before checking the condition
        printf("%d\n", index);
        index++;
    } while(index<=10);
}

