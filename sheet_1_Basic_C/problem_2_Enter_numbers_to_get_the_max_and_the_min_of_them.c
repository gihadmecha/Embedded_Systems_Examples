//Write a program to take numbers from user and find the
//max and min from them (let users choose the No of
//numbers.

// this code can't handle fractions correctly.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter numbers to get the max and the min of them. \n");

    while(1)
    {
        //Initialize variables
        int no_of_numbers = 0;
        int number_1 = 0;
        unsigned int i = 0;
        int number = 0;
        unsigned int max = 0;
        unsigned int min = 0;

        //Enter the number of numbers you need.
        printf("Enter The No. of numbers you will Enter: ");
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

        //Enter number 1
        printf("Enter number 1: ");
        scanf("%d", &number_1);
        printf("number 1 = %d \n", number_1);

        //if the number you entered is negative, Enter another positive number instead of it.
        while(number_1 <= 0)
        {
            printf("it's not a positive number \n");
            printf("Enter a positive number 1: ");
            scanf("%d", &number_1);
            printf("number 1 = %d \n", number_1 );
        }

        //assume the first number is the biggest number and assume it's the smallest number.
        max = number_1;
        min = number_1;

        //Enter the numbers you need the max and the min of them.
        for (i = 1; i < no_of_numbers; ++i)
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

            //which number is the biggest and which one is the smallest
            if(max < number)
            {
                max = number;
            }
            if(min > number)
            {
                min = number;
            }
        }

            //print the max. number
            printf("max = %d \n", max );
            //print the min. number
            printf("min = %d \n", min );
    }

    return 0;
}
