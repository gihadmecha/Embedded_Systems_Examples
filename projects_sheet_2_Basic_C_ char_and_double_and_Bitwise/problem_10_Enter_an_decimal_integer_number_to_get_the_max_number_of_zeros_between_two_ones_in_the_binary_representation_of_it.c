//Write c function to count the max number of zeros
//between two ones in the binary representation of a
//number (296384-> {1001000010111000000} return 4).

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter an decimal integer number, to get the max number of zeros between two ones in the binary representation of it \n");

    while(1)
    {
        //Initialize variables
        double number = 0;
        int i = 0;
        int flage = 0;
        int count = 0;
        int max = 0;

        //Enter a number
        printf("Enter an unsigned integar number: ");
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
            //0&1 = 0
            if(((signed long long int)number & (1 << i)) == 0)
            {
                if(flage>=1)
                {
                 //don't print 0's on the left (5->print 101).
                 //if you have read the first 1 on the left(flage>=1), print the 0
                 printf("0");
                 //flage = 1, these 0's after '1' so count the 0's
                 count++;
                }
            }
            //if you read '1'
            //1&1 = 1
            else
            {
                //if you read '1'
                //the previous number of 0's < the current number of 0's
                if(max < count)
                {
                    //let the current number of 0's is the max
                    max = count;
                }
                //if you read '1', reset the 0's counter
                count = 0;
                //if you have not read the first 1 on the left(flage=0), ignore the 0
                printf("1");
                //if you read '1', start the counting again
                //if you read 1, flage++, so flage >= 1, so flage to print the follong 0's
                flage++;
            }
        }
        //print the result
        printf("\nThe max number of zeros = %d \n", max);
        //space between the user tries
        printf("\n");
    }
    return 0;
}
