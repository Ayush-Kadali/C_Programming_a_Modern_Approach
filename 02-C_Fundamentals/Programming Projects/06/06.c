// Modify the program of Programming Project 05 so that the polynomial is evaluated using the following formula:
// ((((3x+2)x-5)x-1)x+7)x-6


#include <stdio.h>

int main (void)
{
    int x, value;

    printf("Enter the value of x:");
    scanf("%d", &x);
    
    value = ((((3 * x + 2)* x - 5)* x - 1)* x + 7)* x - 6;

    printf("The value of the function is : %d\n", value);

    return 0;
}
