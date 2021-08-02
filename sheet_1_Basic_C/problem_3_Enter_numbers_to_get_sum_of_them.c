//Write a program to take numbers from user and
//calculate the sum of them (let users choose the No of
//numbers.

// this code can't handle fractions correctly.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter numbers to get sum of them. \n");

    while(1)
    {
        //Initialize variables
        int no_of_numbers = 0;
        int i = 0;
        int number = 0 ;
        int sum = 0;

        //Enter the number of numbers you need.
        printf("Enter The No of numbers: ");
        scanf("%d", &no_of_numbers);
        printf("The No of numbers = %d \n", no_of_numbers);

        //if the number you entered is negative, Enter another positive number instead of it.
        while(no_of_numbers <= 0)
        {
            printf("it's not a positive number \n");
            printf("Enter a positive No. of numbers: ");
            scanf("%d", &no_of_numbers);
            printf("The No of numbers = %d \n", no_of_numbers);
        }

        //Enter the numbers you need the sum of them.
        for (i = 0; i < no_of_numbers; ++i)
        {
         printf("Enter number %d: ", i+1);
         scanf("%d", &number);
         printf("number %d = %d \n", i+1, number);

          //if the number you entered is negative, Enter another positive number instead of it.
          while(number <= 0)
          {
              printf("it's not a positive number \n");
              printf("Enter a positive number %d: ", i+1);
              scanf("%d", &number);
              printf("number %d = %d \n", i+1, number);
          }

         sum += number;
        }

        //print the sum result.
        printf("the sum of all numbers = %d \n", sum );
        }

        return 0;
}
