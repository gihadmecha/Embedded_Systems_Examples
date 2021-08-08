//write a program to print the binary representation of a
//number, try not to print zeros on the left (5->print 101).

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter an integer number, to get it's binary representation\n");

    while(1)
    {
        ////Initialize variables
        double number = 0;
        int i = 0;
        int flage = 0;

        //Enter a number
        printf("Enter an integer number: ");
        scanf("%lf", &number);
        printf("The number = %lf \n", number);

        //if the number you entered is out of the range, Enter another positive number instead of it.
        while((number-(signed long long int)number != 0))
        {
            printf("it's not an integer number\n\n");
            printf("Enter an integer number: ");
            scanf("%lf", &number);
            printf("The number = %lf \n", number);
        }

        //the main idea
        for(i= 31; i>=0;i--)
        {
            //bitwise operation to shift '1' and test each bit if it's 1
            // "i" is no. of shifts
            // (unsigned int)number >> i) shift "1" i times to right (>>)
            //bit & 1 = 0, it's 0
            if(((signed long long int)number & (1 << i)) == 0)
            {
                //don't print 0's on the left (5->print 101).
                //if you have read the first 1 on the left(flage>=1), print the 0
                //if you have not read the first 1 on the left(flage=0), ignore the 0
                if(flage>=1)
                {
                 printf("0");
                }
            }
            //bit & 1 = 1, it's 1
            else
            {
                printf("1");
                //if you read 1, flage++, so flage >= 1, so flage to print the follong 0's
                flage++;
            }
        }
        //space between the user's tries
        printf("\n\n");
    }
    return 0;
}
