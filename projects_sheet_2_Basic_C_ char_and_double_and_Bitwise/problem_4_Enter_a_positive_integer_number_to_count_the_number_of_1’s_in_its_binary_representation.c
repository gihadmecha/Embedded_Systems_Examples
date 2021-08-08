//Write a program to count the number of 1’s in an
//unsigned 32-bit integer.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a positive integer number from 1 to 4,294,967,295, to count the number of 1’s in its binary representation\n");

    while(1)
    {
        double number = 0;
        int i = 0;
        unsigned int count = 0;
        unsigned int c = 0;

        //Enter a number
        printf("Enter a positive integer number from 1 to 4,294,967,295: ");
        scanf("%lf", &number);
        printf("The number = %lf \n", number);

        //if the number you entered is out of the range, Enter another positive number instead of it.
        while(number<0 && number>4,294,967,295 && (number-(unsigned int)number != 0))
        {
            printf("it's not a positive integer number from 1 to 4,294,967,295\n\n");
            printf("Enter a positive integer number from 1 to 4,294,967,295: ");
            scanf("%lf", &number);
            printf("The number = %lf \n", number);
        }

        //the main idea
        for(i=0; i<32;i++)
        {
            //bitwise operation to shift '1' and test each bit if it's 1
            // "i" is no. of shifts
            // (unsigned int)number >> i) shift "1" i times to right (>>)
            //bit & 1 = 1, it's 1, count
            //bit & 1 = 0, it's 0, don't count
            if((((unsigned int)number >> i) & 1) == 1)
            {
                //count the number of 1’s
                count++;
            }
        }

        //print the result
        printf("the number of 1's = %i\n\n", count);
    }
    return 0;
}
