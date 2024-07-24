#include <stdio.h>
#include <stdlib.h>

int main () {

    FILE * fpointer = fopen("employees.txt", "a");
        fprintf(fpointer, "\nKelly, customer Care");

    fclose(fpointer);
    return 0;
}
//w-write
//a-append
//r-read