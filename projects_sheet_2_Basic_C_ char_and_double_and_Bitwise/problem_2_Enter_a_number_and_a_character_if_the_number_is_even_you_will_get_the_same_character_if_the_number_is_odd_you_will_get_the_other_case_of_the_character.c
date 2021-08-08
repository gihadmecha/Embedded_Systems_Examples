//Write a C program to take a number and a character
//from user if the number is even print the same
//character, if the number is odd print the other case of
//the character (a->A, B->b).

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a number and a character, if the number is even, you will get the same character, if the number is odd, you will get the other case of the character\n");

    while(1)
    {
       //Initialize variables
        double number = 0;
        char character;

        //Enter a number
        printf("Enter a number: ");
        scanf("%lf", &number);
        printf("The number = %lf \n", number);

        //Enter a character
        printf("Enter a character: ");
        scanf(" %c", &character);
        printf("The character = %c \n", character);

        //let it a positive number, this will not affect on specifying if it's an odd number or not
        //but by this way, it can be stored as an 'unsigned int' so it will handle a bigger numbers
        if(number < 0)
        {
            number *= -1;
        }

        //bitwise operation can't handle 'double' number
        //remove the fraction point to can handle number as int in the next step(bitwise operation step)
        while(number - (unsigned int)number != 0)
        {
            number *= 10;
        }

        // the main idea
        //using bitwise operations
        //if the first right bit is 1, it's an odd number(e.g. 1 >> 01) and if the first right bit is 0, it's an even number(e.g. 2 >> 10)
        //cast the number as 'unsigned int' because bitwise operation can't handle double numbers

        //if it is an even number
        if((((unsigned int)number >> 0) & 1) == 0)
        {
           printf("it is an even number\n");
           printf("The same case of the character = %c \n", character);
        }
        // if it is an odd number
        else
        {
            //if it is a lower case English character
           if(character >= 'a' && character <= 'z')
           {
               character = (character - 'a') + 'A';
               printf("The other case of the character = %c \n", character);
           }
           //if it is an upper case English character
           else if(character >= 'A' && character <= 'Z')
           {
               character = (character - 'A') + 'a';
               printf("The other case of the character = %c \n", character);
           }
           //if it is not an English character
           else
           {
               printf("The character = %c \n", character);
               printf("it is not an English character\n");
           }
        }
    }

    return 0;
}
