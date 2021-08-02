//Write a program to sum the digits in a decimal number
//145 -> 1+4+5=10.

// this code can't handle fractions correctly.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a number to sum it's digits. \n");

     while(1)
    {
        //Initialize variables
        int number = 0;
        //int i = 1;
        //int j = 10;
        int digit = 0;
        int sum = 0;

        //Enter a number
        printf("Enter a positive integer number: ");
        scanf("%d", &number);
        printf("The number = %d \n",number);

        //if the number you entered is negative, Enter another positive number instead of it.
        while(number < 0)
        {
            printf("it's not a positive number\n");
            printf("Enter a positive integer number: ");
            scanf("%d", &number);
            printf("The number = %d \n", number);
        }

       /* while(number >= 0.1)
        {
            digit = number % j;
            digit /= (j/10);
            number = number - (digit*i);

            i *=10;
            j *=10;
            sum += digit;
        }*/

        //the main idea
        while(number > 0)
        {
           digit = number % 10;
           sum += digit;
           number /= 10;
        }

        //print the result
        printf("The sum of number's digits = %d \n", sum);
    }
   return 0;
}


