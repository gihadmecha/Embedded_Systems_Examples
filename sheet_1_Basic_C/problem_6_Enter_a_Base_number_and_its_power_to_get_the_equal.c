//Write a program to calculate the power of a number.
//The number and its power are input from user.

// this code can't handle fractions correctly.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a Base number and it's power to get the equal. \n");

    while(1)
    {
        //Initialize variables
        int number = 0;
        int power = 0;
        int result = 1;
        int i = 0;

        //Enter a number
        printf("Enter a positive integer Base number: ");
        scanf("%d", &number);
        printf("The Base = %d \n",number);

        //if the number you entered is negative, Enter another positive number instead of it.
         while(number <= 0)
        {
            printf("it's not a positive number \n");
            printf("Enter a positive integer Base number: ");
            scanf("%d", &number);
            printf("The Base = %d \n", number);
        }

        //Enter a number
        printf("Enter an positive integer power: ");
        scanf("%d", &power);
        printf("The power = %d \n",power);

        //if the number you entered is negative, Enter another positive number instead of it.
        while(power <= 0)
        {
            printf("it's not a positive number \n");
            printf("Enter a positive integer power: ");
            scanf("%d", &power);
            printf("The power = %d \n", power);
        }


       // result = pow(number, power);
       // the basic idea of the power operation
        for(i = 0; i < power; i++)
        {
           result *= number;
        }
        // print the result
        printf("the result of %d power %d = %d \n", number, power, result);
    }

    return 0;
}

