//Write a program that take two numbers and multiply
//them without using * operation.

// this code can't handle fractions correctly.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the Two numbers you want to multiply them.\n");

    while(1)
    {
        //Initialize variables
        int number_1 = 0;
        int number_2 = 0;
        int result = 0;
        int i = 0;

        //Enter a number
        printf("Enter a positive integer number: ");
        scanf("%d", &number_1);
        printf("The first number = %d \n",number_1);

        //if the number you entered is negative, Enter another positive number instead of it.
        while(number_1 <= 0)
        {
            printf("it's not a positive number \n");
            printf("Enter a positive integer number: ");
            scanf("%d", &number_1);
            printf("The first number = %d \n", number_1);
        }

        //Enter another number
        printf("Enter another positive integer number: ");
        scanf("%d", &number_2);
        printf("The second number = %d \n",number_2);

        //if the number you entered is negative, Enter another positive number instead of it.
        while(number_2 <= 0)
        {
            printf("it's not a positive number \n");
            printf("Enter another positive integer number: ");
            scanf("%d", &number_2);
            printf("The second number = %d \n", number_2);
        }

        //the basic idea of the multiplication
        for (i = 1 ; i <= number_2; ++i)
        {
         result += number_1;
        }

        //print the multiplication result.
        printf("the multiply of the two numbers %d , %d = %d \n", number_1, number_2, result);
    }

    return 0;
}

