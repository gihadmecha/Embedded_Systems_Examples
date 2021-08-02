//Write a program to take 2 numbers from user and
//calculate sum of all numbers between them.

// this code can't handle fractions correctly.

#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Enter Two Numbers to get the sum of all numbers between them. \n");

    while(1)
    {
        //Initialize variables
        int number_1 = 0;
        int number_2 = 0;
        unsigned int the_last_sum = 0;
        unsigned int i = 0;
        unsigned int max = 0;
        unsigned int min = 0;

        //Enter number
        printf("Enter a positive integer number: ");
        scanf("%d", &number_1);
        printf("The first number = %d \n",number_1);

        //if the number you entered is negative, Enter another positive number instead of it.
        while(number_1 <= 0)
        {
            printf("it's not a positive numbers \n");
            printf("Enter a positive integer number: ");
            scanf("%d", &number_1);
            printf("The first number = %d \n", number_1);
        }

        //Enter number
        printf("Enter another positive integer number: ");
        scanf("%d", &number_2);
        printf("The second number = %d \n",number_2);

        //if the number you entered is negative, Enter another positive number instead of it.
        while(number_2 <= 0)
        {
            printf("it's not a positive numbers \n");
            printf("Enter another positive integer number: ");
            scanf("%d", &number_2);
            printf("The second number = %d \n", number_2);
        }

        //which number is the biggest and which one the smallest
        if(number_1 < number_2)
        {
            max = number_2;
            printf("max = %d \n", max );
            min = number_1;
            printf("min = %d \n", min );
        }
        else
        {
            max = number_1;
            printf("max = %d \n", max );
            min = number_2;
            printf("min = %d \n", min );
        }

        //sum all numbers between the biggest number and the smallest number
        for (i = min+1; i < max; ++i)
        {
            the_last_sum = the_last_sum + i;
        }

        //print the result
        printf("the sum of all numbers between %d , %d = %d \n", number_1, number_2, the_last_sum);
    }

    return 0;
}
