#include <stdio.h>
#include <stdlib.h>


int main() {
    char color[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];



    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a pluralNoun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity 2 names");
    scanf("%s%s", celebrityF, celebrityL);


    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s%S\n", celebrityF, celebrityL);

    return 0;
}