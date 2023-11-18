# Solution to Exercise 10

## Question

In `dweight.c` program (Section 2.4), which spaces are essential.

## Solution

The program in dweight.c is 


```c
#include <stdio.h>

int main (void)
{
    int height, length, width, volume, weight;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165)/166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
```    

The only spaces essential in the program are:
1. Space after `#include` before declaring derectives
2. Space after `int` and before `main`
3. Space after `int` before declaring the variables
4. Space between `return 0`


