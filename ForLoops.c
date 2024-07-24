//FOR LOOPS allows us to use indexing variable
//can allow use to loop through an array
#include <stdio.h>
#include <stdlib.h>


int main () {
   int luckyNumbers[] = {4, 8, 15, 16, 23, 42};

    int i;
    for(i = 0; i < 6; i++) {
                printf("%d\n", luckyNumbers[i]); 
    }

}