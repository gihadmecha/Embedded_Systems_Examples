//Given two integers: L and R, Find the maximal value of A
//xor B where A and B satisfy the condition L =< A <= B <=
//R Constrains: 1 <= L <= R <= 1000 Input format: the
//input contains two lines first line contains L and next
//line contains R. Output format: The maximum value of
//Axor B.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter two positive integer numbers L and R less than 1000, L < R, to get The maximum value of A xor B, where L =< A <= B <=R \n");

    while(1)
    {
        //Initialize variables
        double l = 0;
        double r = 0;
        int i = 0;
        int j = 0;
        int out = 0;
        int max = 0;
        int x = 0;
        int y = 0;

        //Enter number
        printf("Enter a positive integer L number from 1 to 1000: ");
        scanf("%lf", &l);
        printf("The L = %lf \n\n",l);

        //if the number you entered is negative, Enter another positive number instead of it.
        while(l < 1 | l > 1000 | l - (long int)l != 0)
        {
            printf("it's not a positive number from 1 to 1000 \n");
            printf("Enter a positive integer L number from 1 to 1000: ");
            scanf("%lf", &l);
            printf("The L = %lf \n\n", l);
        }

        //Enter number
        printf("Enter a positive integer number R bigger than the L from 1 to 1000: ");
        scanf("%lf", &r);
        printf("The R = %lf \n\n",r);

        //if the number you entered is negative, Enter another positive number instead of it.
        while(r < l | r > 1000 | r - (long)r != 0)
        {
            printf("it's not a positive number R bigger than the L  from 1 to 1000 \n");
            printf("Enter a positive integer R number bigger than the L from 1 to 1000: ");
            scanf("%lf", &r);
            printf("The R = %lf \n\n", r);
        }

        //counter of the left number
        for(i=l; i<=r; i++)
        {
            //counter of the right number
            for(j=l; j<=r; j++)
            {
              //a right number < a left number, don't print because it was repeated
              if(i<=j)
              {
                //normal Xor operation
                out = i^j;
                //print Xor result
                printf("%d ^ %d = %d\n", i, j, out);
                //get the max result and record the whole operation to print it later
                //if the current result > max, let the current result is the max
                if(max < out)
                {
                    max = out;
                    //record the right number
                    x = i;
                    //record the left number
                    y = j;
                }
              }
            }
        }
        //print the operation of the max result
        printf("\n%d ^ %d = %d\n\n", x, y, max);
    }
}
