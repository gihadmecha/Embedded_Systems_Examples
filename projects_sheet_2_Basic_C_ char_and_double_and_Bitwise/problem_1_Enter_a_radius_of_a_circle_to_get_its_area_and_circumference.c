//Write a program that reads the radius of a circle and
//calculates the area and circumference.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a radius of a circle to get it's area and circumference.. \n");

    while(1)
    {
        //Initialize variables
        double radius = 0;
        double pi = 22.0/7.0;
        double area = 0;
        double circumference = 0;

        //Enter a number
        printf("Enter the radius: ");
        scanf("%lf", &radius);
        printf("The radius = %lf \n", radius);

        //if the number you entered is positive
        if(radius >= 0)
        {
            // Area of a circle formula
            area = pi * radius * radius;
            // circumference of a circle formula
            circumference = 2 * pi * radius;

            // print the result
            printf("the area of the circle = %lf \nthe circumference of the circle = %lf\n", area, circumference);

        }
        //if the number you entered is negative, Enter another positive number instead of it.
        else
        {
            printf("it's not a positive number\n");
        }
    }

    return 0;
}


