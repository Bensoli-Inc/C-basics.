#include <stdio.h>
#include <stdlib.h>

int maxx (int num1, int num2) {
    int result;
    if (num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }
    return result;
}

int max3 (int num1, int num2, int num3) {
    int result;
    if (num1>= num2 && num1 >= num3) {
        result = num1;
    } else if (num2>=num1 && num2>=num3) {
        result=num2;
    } else {
        result = num3;
    }
    return result;
}

int main() {
   
printf("The largest number is: %d\n", max3(3, 9, 7));
printf("The biggest number is: %d", maxx(4, 10));
}