
// Write aprogram that computes the volume of a sphere with 10-meter radius, using the formula v = 4/3pier^3.
// ~~Write the fraction 4/3 as 4.0f/3.0f~~ (Try writting it as 4/3. What happens?)

#include <stdio.h>

int main(void)
{
    int radius = 10;
    float volume;

    printf("%d\n", 4/3); // Checking what is the answer for 4/3

    volume = 4/3 * 3.14 * radius * radius * radius; // Volume of sphere = 4/3 * pie * r^3
    printf("Volume of the spehere is : %.2f\n", volume);
    
    return 0;
}
