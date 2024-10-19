/*
    Program to Determine a Quadrant of a Point
*/

#include<stdio.h>

int main()
{
    printf("Program to Determine a Quadrant of a Point by using *Ladder If Else*\n\n");
    
    float x, y;
    
    printf("Enter the x-coordinate : ");
    scanf("%f", &x);
    printf("Enter the y-coordinate : ");
    scanf("%f", &y);
    printf("\n");
    
    if(x > 0 && y > 0)
    {
        printf("The point (%.2f, %.2f) lies in the 1st quadrant", x, y);
    }
    else if(x < 0 && y > 0)
    {
        printf("The point (%.2f, %.2f) lies in the 2nd quadrant", x, y);
    }
    else if(x < 0 && y < 0)
    {
        printf("The point (%.2f, %.2f) lies in the 3rd quadrant", x, y);
    }
    else if(x > 0 && y < 0)
    {
        printf("The point (%.2f, %.2f) lies in the 4th quadrant", x, y);
    }
    else if(x == 0 && y != 0)
    {
        printf("The point (%.2f, %.2f) lies on the y-axis", x, y);
    }
    else if(y == 0 && x != 0)
    {
        printf("The point (%.2f, %.2f) lies on the x-axis", x, y);
    }
    else
    {
        printf("The point (%.2f, %.2f) is at the origin", x, y);
    }
    
    return 0;
}
