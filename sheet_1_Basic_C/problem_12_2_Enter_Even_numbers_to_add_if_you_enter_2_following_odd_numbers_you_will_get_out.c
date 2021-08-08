//write a program to take even numbers from user and
//print the sum of them after each entry if the user enters
//2 odd number the program print "bye" and stopped.

/*#include <stdio.h>
#include <stdlib.h>

int main()
{   int no_of_numbers = 0;
    int i = 0;
    int *number ;
    int sum = 0;
    int n = 0;


    printf("Enter The No of numbers: ");
    scanf("%d", &no_of_numbers);
    printf("The No of numbers = %d \n", no_of_numbers);
    number = (int*)malloc(no_of_numbers*sizeof(int));


    for (i = 0; i < no_of_numbers; ++i)
    {

     printf("Enter number %d: ", i+1);
     scanf("%d", number + i);
     printf("number %d = %d \n", i+1, number[i] );
     if(number[i]%2 == 0)
     {
     sum += number[i];
     printf("sum = %d \n", sum );

     }
     else if(n < 1)
     {
       n = 1;
     }
     else
     {
       printf("bye \n");
       break;
     }
    }


    free(number);

    return 0;
}*/



//write a program to take even numbers from user and
//print the sum of them after each entry if the user enters
//2 odd number the program print "bye" and stopped.

// this code can't handle fractions correctly.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Initialize variables out of while loop to set them zero only for the first time
    int sum = 0;
    int flage = 0;

    printf("Enter Even numbers to add. if you enter 2 odd numbers, you will get out. \n");

    while(1)
    {
        //Initialize variables
        int number = 0;

        //Enter a number
        printf("Enter an even positive integer number: ");
        scanf("%d", &number);
        printf("The number added = %d \n",number);

        //if the number you entered is negative, Enter another positive number instead of it.
        while(number <= 0)
        {
            printf("it's not a positive number\n");
            printf("Enter an even positive integer number: ");
            scanf("%d", &number);
            printf("The number added = %d \n", number);
        }

        //if it's odd, flag+1
        if(number%2 != 0)
        {
           flage++;
        }
        //if it's even, add it to the previous even numbers
        //, where "sum" is the sum of the previous even numbers while "while(1)" is repeating
        //"while(1)" = the black screan that shows the output of this program
        else
        {
          sum += number;
          printf("The sum = %d \n", sum);
          flage = 0;
        }
        //if flage = 2, the user has printed 2 odd numbers, print "bye" and get out
        if(flage == 2)
        {
            printf("bye\n");
            break;
        }
    }

    return 0;
}
