//Write c code to reverse bits in an 8-bit number
//(149->10010101 return 169->10101001),
//(5->00000101 return 160->10100000).

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a 8-bit number, to reverse it's binary representation and get the decimal representation of the reversed binary\n");

    while(1)
    {
        //Initialize variables
        double number = 0;
        double decimal_number = 0;
        int i = 0;
        double based_on_2_number = 0;
        int j = 0;

        //Enter a number
        printf("Enter an integer number: ");
        scanf("%lf", &number);
        printf("The number = %lf \n", number);

        //if the number you entered is out of the range, Enter another positive number instead of it.
        while((number-(int)number != 0) || number > 255)
        {
            printf("it's not an integer number\n\n");
            printf("Enter an integer number: ");
            scanf("%lf", &number);
            printf("The number = %lf \n", number);
        }


        printf("\nthe original binary representation = ");
        //print the bit 8 first on the left, then the bit 7, ..., then the bit 0 on the right
        for(i= 7; i>=0; i--)
        {
            //bitwise operation to shift '1' and test each bit if it's 1
            // "i" is no. of shifts
            // (int)number >> i) shift "1" i times to right (>>)
            //bit & 1 = 0, it's 0
            if(((int)number & (1 << i)) == 0)
            {
                //print the original binary representation
                 printf("0");
            }
            //bit & 1 = 1, it's 1
            else
            {
                //print the original binary representation
                printf("1");
                //to get the decimal representation from the binary representation
                //Initialization, for the first '1' in the bit 0 (on the right of the binary number), decimal_number = 2^0 = 1
                based_on_2_number = 1;
                //the normal binary to decimal convert operation
                for(j=0; j<i; j++)
                {
                    based_on_2_number *= 2;
                }
                decimal_number = decimal_number + based_on_2_number;
            }
        }
        //print the original decimal representation
        printf("\nthe original decimal representation = %lf\n", decimal_number);
        //space between the original and the reversed
        printf("\n");
        //Reset the decimal_number variable
        decimal_number = 0;



        printf("\nthe reversed binary representation = ");
        //print the bit 0 first on the left, then the bit 1,..., then the bit 8 on the right
        for(i= 0; i<8; i++)
        {
            //bitwise operation to shift '1' and test each bit if it's 1
            // "i" is no. of shifts
            // (int)number >> i) shift "1" i times to right (>>)
            //bit & 1 = 0, it's 0
            if(((int)number & (1 << i)) == 0)
            {
                //print the reversed binary representation
                printf("0");
            }
            else
            {
                //print the reversed binary representation
                printf("1");
                //Initialization, for the first '1' in bit 0 (on the right of the binary number), decimal_number = 2^0 = 1
                based_on_2_number = 1;
                //the normal binary to decimal convert operation
                //but with reversed index, j=7-i
                for(j=0; j<7-i; j++)
                {
                    based_on_2_number *= 2;
                }
                decimal_number = decimal_number + based_on_2_number;
            }
        }
        //print the reversed decimal representation
        printf("\nthe reversed decimal representation = %lf\n", decimal_number);

        //space between the user's tries
        printf("\n");
    }
    return 0;
}
