# Programming Project 03

## Question

Modify the program of Programming project 2 so that is prompts the user to enter the radius of the spehere.

## Solution

```c
#include <stdio.h>
#define PI 3.14

int main(void)
{
    int radius;
    float volume;

    printf("Enter the radius of the sphere: ");
    scanf("%d", &radius);

    volume = 4.0f/3.0f * PI * radius * radius * radius; // Volume of sphere = 4/3 * pie * r^3

    printf("Volume of the spehere is : %.2f\n", volume);
    
    return 0;
}
```
