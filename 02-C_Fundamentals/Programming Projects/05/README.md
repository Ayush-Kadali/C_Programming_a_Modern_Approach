# Programming Project 05

## Question

Write a program that asks the user to enter a value for x and then display the value of the following polynomial:
`3x^5 + 2x^4 - 5c^3 - x^2 + 7x - 6`

## Solution

```c
#include <stdio.h>

int main (void)
{
    int x, value;

    printf("Enter the value of x:");
    scanf("%d", &x);

    value = 3 * x*x*x*x*x + 2 * x*x*x*x - 5 * x*x*x + x*x + 7 * x -6;

    printf("The value of the function is : %d\n", value);

    return 0;
}
```


