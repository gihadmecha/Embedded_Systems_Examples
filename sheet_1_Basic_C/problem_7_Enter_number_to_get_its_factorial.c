//Write a program that reads a positive integer and
//computes the factorial.

// this code can't handle fractions correctly.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a number to get it's factorial. \n");

    while(1)
    {
        //Initialize variables
        int number = 0;
        int i = 0;
        int factorial = 0;

        //Enter a number
        printf("Enter a positive integer number: ");
        scanf("%d", &number);
        printf("The number = %d \n",number);


        //if the number you entered is positive
        if(number >= 0)
        {
            // store the number in "factorial"
            factorial = number;

            // the main idea o the ! operation
            for(i = number-1; i > 0; --i)
            {
              //the number * (the number - 1)
              factorial *= i;
            }

            // print the result
            printf("the factorial of %d = %d \n", number, factorial);

        }
        //if the number you entered is negative, Enter another positive number instead of it.
        else
        {
            printf("it's not a positive integer number\n");
        }
    }

    return 0;
}


