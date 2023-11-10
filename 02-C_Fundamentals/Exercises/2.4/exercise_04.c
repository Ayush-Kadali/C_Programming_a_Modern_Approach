
// Write a program that declares several int and float variables- without initializing them - and then prints their valus. Is there any pattern to the values?

#include <stdio.h>

int main(void)
{
    int first_int, second_int, third_int, fourth_int;

    float first_float, second_float, third_float, fourth_float;

    printf("integers : %d,   %d,  %d,  %d \n", first_int, second_int, third_int, fourth_int);
    printf("float : %f,   %f,   %f,   %f.", first_float, second_float, third_float, fourth_float);

    return 0;
}
