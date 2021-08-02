//Write a program that reads a positive integer and check
//if this number is a base of 2 like 1,2,4,8,16,32, 64...

// this code can't handle fractions correctly.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a number to know if it's a based on 2 or not. \n");

    while(1)
    {
        //Initialize variables
        int number = 0;
        int i = 0;
        int Coefficient = 0;

        //Enter a number
        printf("Enter a positive integer number: ");
        scanf("%d", &number);
        printf("The number = %d \n",number);

        //if the number you entered is negative, Enter another positive number instead of it.
        while(number <= 0)
        {
            printf("it's not a positive number\n");
            printf("Enter a positive integer number: ");
            scanf("%d", &number);
            printf("The number = %d \n", number);
        }

        //initial Coefficient of the number is itself
        Coefficient = number;

        //the normal Maths methodology we follow to find Coefficients of number based on 2
        while(Coefficient%2 == 0)
        {
          Coefficient = Coefficient / 2;
          //printf("the Coefficient = %d\n", Coefficient);
        }

        //if the result = 1, the number is based on 2
        if(Coefficient == 1)
        {
            printf("this number is based on 2\n");
        }
        //if the result != 1, the number is not based on 2
        else
        {
           printf("this number is not based on 2\n");
        }
    }

    return 0;
}


