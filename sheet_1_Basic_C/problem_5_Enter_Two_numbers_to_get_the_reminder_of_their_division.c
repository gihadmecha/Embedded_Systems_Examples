//Write a program that take two numbers and calculate
//the reminder without using % operation.

// this code can't handle fractions correctly.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter Two numbers to get the reminder of their division. \n");

    while(1)
    {
        //Initialize variables
        int number_1 = 0;
        int number_2 = 0;
        int reminder = 0;

        //Enter a number
        printf("Enter a positive integer numerator number: ");
        scanf("%d", &number_1);
        printf("The numerator = %d \n",number_1);

        //if the number you entered is negative, Enter another positive number instead of it.
        while(number_1 < 0)
        {
            printf("it's not a positive number \n");
            printf("Enter a positive integer numerator number: ");
            scanf("%d", &number_1);
            printf("the numerator = %d \n", number_1 );
        }

        //Enter a number
        printf("Enter a positive integer denominator number: ");
        scanf("%d", &number_2);
        printf("The denominator = %d \n",number_2);

        //if the number you entered is negative, Enter another positive number instead of it.
        while(number_2 < 0)
        {
            printf("it's not a positive number \n");
            printf("Enter a positive integer denominator number: ");
            scanf("%d", &number_2);
            printf("the denominator = %d \n", number_2 );
        }

        // any_number/0 = unknown answer
        // because (any_number - 0) inside the following while loop, let this while loop is infinity
        if(number_2 == 0)
        {
            printf("Syntax Error \n");
        }
        else
        {
            //before anything, because the numerator as it is(it has not changed), we can assume it the reminder
            reminder = number_1;

            //the main idea of the % operation
            while (reminder >= number_2)
            {
                reminder -= number_2 ;
            }

            //print the reminder.
            printf("the reminder of %d %% %d = %d \n", number_1, number_2, reminder);
        }
    }

    return 0;
}
