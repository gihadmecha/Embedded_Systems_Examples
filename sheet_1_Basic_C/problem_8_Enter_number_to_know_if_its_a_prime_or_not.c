//Write a program that reads a positive integer and
//checks if it is a prime.

// this code can't handle fractions correctly.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter number to know if it's a prime or not. \n");

    while(1)
    {
        //Initialize variables
        int number = 0;
        unsigned int i = 0;
        unsigned int flage = 0;

        //Enter a number
        printf("Enter a positive integer number: ");
        scanf("%d", &number);
        printf("The number = %d \n",number);

        //if the number you entered is negative, Enter another positive number instead of it.
        while(number <= 0)
            {
                printf("it's not a positive integer number\n");
                printf("Enter a positive integer number: ");
                scanf("%d", &number);
                printf("The number = %d \n", number);
            }

        //the number / (each number is smaller than the number you entered except "1")
        for(i = 2; i < number; ++i)
        {
            //if the reminder of any "/" operation = 0, let "flage" = 1
            if(number%i == 0)
            {
                flage = 1;
            }
         }

        // the flage = 1, the reminder of any "/" operation = 0, the number can divide by a smaller number and get an integer result
        // it's not a prime number
        if (flage == 1)
        {
            printf("it's not a prime number \n");
        }
        // 1 is not a prime number
        else if (number == 1)
        {
            printf("it's not a prime number \n");
        }
        // the flage = 0, the reminder of any "/" operation != 0, the number can not divide by a smaller number except "1"
        // it does not get an integer result
        // it's a prime number
        else
        {
            printf("it's a prime number \n");
        }
    }

     return 0;
}


