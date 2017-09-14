#include <stdio.h>
#include <stdlib.h>

int main()
{
    // variable to store age
    int age = 36;
    int *agePointer = &age;
    printf("adresse du pointeur %d , valeur du pointeur %d", agePointer, *agePointer);
    //printf("How old are you ?");
    //scanf("%d", &age);
    //printf("Your are so young, you only are %d !!!\n\n", age);

    return 0;
}
