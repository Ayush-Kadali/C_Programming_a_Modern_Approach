# Solution to Exercise 0.4

## Question 

Write a program that declares several int and float variables- without initializing them - and then prints their valus. Is there any pattern to the values?

## Solution

```
#include <stdio.h>

int main(void)
{
    int first_int, second_int, third_int, fourth_int;

    float first_float, second_float, third_float, fourth_float;

    printf("integers : %d,   %d,  %d,  %d \n", first_int, second_int, third_int, fourth_int);
    printf("float : %f,   %f,   %f,   %f.", first_float, second_float, third_float, fourth_float);

    return 0;
}
```

This is a program declares four integer and four floats and displays their values without initializing them.

This is the output I got when compiled using gcc.

```
integers : 0,   0,  1675548480,  32551 
float : 0.000000,   8274904948131294609408.000000,   0.000000,   0.000000.
```

> There is no pattern int he numbers they are zero or random numbers

