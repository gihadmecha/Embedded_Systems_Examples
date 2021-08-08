//Write a full C program to take 4 choose from user:
//1-Set bit.
//2-Clear bit
//3-Toggle bit.
//4-Read bit.
//then take number, and bit number.
//print the number after set, clear, or toggle if 1,2 or 3 is
//selected.
//print the bit value if 4 is selected.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        //Initialize variables
        double choice_number = 0;
        double bit_number;
        double number = 0;

        printf("choose a number from the following choices:\n1-Set bit\n2-Clear bit\n3-Toggle bit\n4-Read bit\n");

       //Enter a number
        printf("I'll choose:");
        scanf("%lf", &choice_number);
        printf("the operation number = %lf \n", choice_number);

        //if the number you entered is out of the range, Enter another positive number instead of it.
        while(choice_number < 1 | choice_number > 4 | (choice_number-(int)choice_number != 0) )
        {
            printf("it's not found \n");
            printf("Enter a number from the above list: ");
            scanf("%lf", &choice_number);
            printf("the Bit number = %lf\n", choice_number);
        }

        //Enter a number
        printf("Enter a number:");
        scanf("%lf", &number);
        printf("the number = %lf \n", number);

        //if the number you entered is out of the range, Enter another positive number instead of it.
        while((number-(signed long long int)number != 0))
        {
            printf("it's not an integer number\n\n");
            printf("Enter an integer number: ");
            scanf("%lf", &number);
            printf("The number = %lf \n", number);
        }

        //Enter a number
        printf("Enter the integer Bit number: ");
        scanf("%lf", &bit_number);
        printf("the Bit number = %lf \n", bit_number);

        //if the number you entered is out of the range, Enter another positive number instead of it
        while(bit_number < 0 | (bit_number-(int)bit_number != 0))
        {
            printf("it's an integer number\n");
            printf("Enter the integer Bit number: ");
            scanf("%lf", &bit_number);
            printf("the Bit number = %lf\n", bit_number);
        }

        //read one bit
        //0&1 = 0
        if(((signed long int)number & (1 << (int)bit_number)) == 0)
            {
                 printf("the Bit value = 0\n\n");
            }
            //1&1 = 1
            else
            {
                printf("the Bit value = 1\n\n");
            }


        if(choice_number == 1)
        {
            //set the one bit
            //0|1 = 1
            //1|1 = 1
            number = (signed long int)number | (1 << (int)bit_number);
        }



        else if(choice_number == 2)
        {
            //clear one bit
            //~0 = 1
            //~1 = 0
            number = (signed long int)number & (~(1 << (int)bit_number));
        }


        else if(choice_number == 3)
        {
            //toggle one bit
            //0^1 = 1
            //1^1 =0
            number = (signed long int)number ^ (1 << (int)bit_number);
        }


        //read the one bit after the operation
        if(choice_number != 4)
        {
            //0&1 = 0
           if(((signed long int)number & (1 << (int)bit_number)) == 0)
            {
                 printf("the new Bit value = 0\n\n");
            }
            //1&1 = 1
            else
            {
                printf("the new Bit value = 1\n\n");
            }
        }

    }
    return 0;
}
