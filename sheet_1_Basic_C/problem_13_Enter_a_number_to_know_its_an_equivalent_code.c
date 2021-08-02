//You are designing a poster which prints out numbers
//with a unique style applied to each of them. The styling
//is based on the number of closed paths or holes present
//in a giver number. The number of holes that each of the
//digits from 0 to 9 have are equal to the number of
//closed paths in the digit. Their values are:
//1, 2, 3, 5 and 7 = 0 holes.
//0, 4, 6, and 9 = 1 hole.

//8 = 2 holes.
//Example if number 3824->3 has 0 holes,8 has 2
//holes,4 has 1hole sum=0+2+1=3.

// this code can't handle fractions correctly.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a number to know it's an equivalent code. \n");

     while(1)
    {
        //Initialize variables
        int number = 0;
        int digit = 0;
        int sum = 0;
        int hole_number = 0;
        // hole number = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
        int hole[]     = {1, 0, 0, 0, 1, 0, 1, 0, 2, 1};

        //Enter a number
        printf("Enter positive integer number: ");
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

        // the main idea
        while(number > 0)
        {
           hole_number = number % 10;
           digit = hole[hole_number];
           sum += digit;
           number /= 10;
        }

        //print the result
        printf("The sum of number's digits = %d \n", sum);
    }
   return 0;
}


