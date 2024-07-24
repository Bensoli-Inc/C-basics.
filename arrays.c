#include <stdio.h>
#include <stdlib.h>


int main() {

    int luckyNumbers[] = {4, 65, 76, 200, 30, 33, 44};

    printf("%d", luckyNumbers[0]); //state the index of the array you want to print out
                                //0 is the 1st index in an array
    luckyNumbers[1] = 300; //u can modify a number in an array
    printf("%d", luckyNumbers[1]);                           

    int luckyIntegers[10]; //declaring an empty array
    luckyIntegers[1] = 80; //assigning integers to the indexes
    return 0;
}