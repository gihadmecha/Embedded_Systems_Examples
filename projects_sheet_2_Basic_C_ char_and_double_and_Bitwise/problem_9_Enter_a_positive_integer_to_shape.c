//Write c function to take number of lines and draw
//pattern with '*' like:

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a positive integer less than 40 to shape\n\n");

    while(1)
    {
        //Initialize variables
        double no_of_lines = 0;
        int i = 0;
        int j = 0;
        int no_of_spaces = 0;
        int no_of_spaces_1 = 0;
        int no_of_stars = 0;

       //Enter a number
        printf("a positive integer no. of lines less than 40:");
        scanf("%lf", &no_of_lines);
        printf("the number of lines = %lf \n\n", no_of_lines);
        printf("\n");

         //if the number you entered is out of the range, Enter another positive number instead of it.
        while((no_of_lines-(unsigned long long int)no_of_lines != 0 | no_of_lines<0 | no_of_lines>40))
        {
            printf("it's not a positive integer number less than 40\n\n");
            printf("Enter a positive integer number of lines less than 40:");
            scanf("%lf", &no_of_lines);
            printf("The number = %lf \n\n", no_of_lines);
        }

        printf("pattarn 1:\n");
        //count the no. of lines
        for(j=0; j<no_of_lines; j++)
        {
            //no_of_stars--;
            no_of_stars = no_of_lines - j;

            for(i=0; i<no_of_stars; i++)
            {
                printf("*");
            }

            printf("\n");
        }

        printf("\n\npattarn 2:\n");
        for(j=0; j<no_of_lines; j++)
        {
            no_of_stars = j + 1;

            for(i=0; i<no_of_stars; i++)
            {
                printf("*");
            }

            printf("\n");
        }



        printf("\n\npattarn 3:\n");
        no_of_spaces_1 = 0;
        for(j=no_of_lines-1; j>0; j--)
        {
            no_of_spaces = j*2-1;

            for(i=0; i<no_of_spaces_1; i++)
            {
                printf(" ");
            }

            printf("*");

            for(i=0; i<no_of_spaces; i++)
            {
                printf(" ");
            }

            if(no_of_spaces !=  0)
            {
               printf("*");
            }

            no_of_spaces_1++;
            printf("\n");
        }

        no_of_spaces--;

        for(j=1; j<=no_of_lines; j++)
        {
            for(i=0; i<no_of_spaces_1; i++)
            {
                printf(" ");
            }
            no_of_spaces_1--;

            printf("*");

            for(i=0; i<no_of_spaces; i++)
            {
                printf(" ");
            }

            if(no_of_spaces != 0)
            {
                printf("*");
            }

            no_of_spaces = j*2 - 1;

            printf("\n");
        }


        printf("\n\npattarn 4:\n");
        no_of_stars = 1;
        for(j=no_of_lines; j>0; j--)
        {
            no_of_spaces = j-1;

            for(i=0; i<no_of_spaces; i++)
            {
                printf(" ");
            }
            for(i=0; i<no_of_stars; i++)
            {
                printf("*");
            }

            printf("\n");
            no_of_stars+=2;
        }

        printf("\n");
    }
    return 0;
}
