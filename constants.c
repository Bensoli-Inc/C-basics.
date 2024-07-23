#include <stdio.h>
#include <stdlib.h>


//constant cant be changed once declared

int main () {

const int num = 40;
printf("%d\n", num);

// num = 8; an error will occur since it is an unmodifiable variable
printf("%d", num); 

return 0;
}