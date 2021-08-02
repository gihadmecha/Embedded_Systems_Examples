//Write a program that reads a positive integer and
//checks if it is a perfect square.

// this code can't handle fractions correctly.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a number to know if it's a perfect square. \n");

    while(1)
    {
        //Initialize variables
        int number = 0;
        unsigned int i = 0;
        int flage = 0;

        //Enter a number
        printf("Enter a positive integer number: ");
        scanf("%d", &number);
        printf("The number = %d \n",number);

        //if the number you entered is positive
        if(number >= 0)
        {
         //result = sqrt(number);
         //multply each number smaller than the number you entered by itself and check if the result equal it
         //check if (i*i = the number you check), where "i" is each number smaller than the number you check
         for(i = 0; i <= number; i++)
         {
           //if (i*i = the number you check)
           if(i*i == number)
           {
            flage = 1;
           }
         }

         //if (i*i = the number you check), the number is a perfect square
         if(flage == 1)
         {
            printf("it's a perfect square \n");
         }
         //if (i*i != the number you check), the number is a perfect square
         else
         {
            printf("it's not a perfect square\n");
         }

        }
        //if the number you entered is negative, Enter another positive number instead of it.
        else
        {
            printf("Enter positive integer number\n");
        }
    }

     return 0;
}


