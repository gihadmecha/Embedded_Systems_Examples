//Write a program to reverse a number in decimal
//representation (1205->5021).

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a number to reverse its decimal representation\n");

    while(1)
    {
      //Initialize variables
      double number = 0;
      //unsigned integar_part = 0;
      int digit = 0;
      int no_of_digits_the_fraction_point_stepped = 0;
      int no_of_digits_are_printed = 0;
      //int fraction_digit = 0;
      //double fraction_part = 0;

      //Enter a number
      printf("Enter a number: ");
      scanf("%lf", &number);
      printf("The number = %lf \n", number);

      //let it a positive number
      //by this way, it can be stored as an 'unsigned int' so it will handle a bigger numbers
      //but print "-"
      if(number < 0)
      {
        number *= -1;
        printf("-");
      }

      //the % can't handle 'double' number
      //remove the fraction point to can handle number as int in the next step(the % operation step)
      while(number - (unsigned int)number != 0)
      {
        //move the fraction point right
        number *= 10;
        //no. of digits the fraction point stepped
        no_of_digits_the_fraction_point_stepped++;
      }

      //the main idea
      while(number != 0)
      {
         digit = (unsigned int)number%10;
         number =(unsigned int)number/10;
         printf("%d", digit);

         //if no. of digits are printed = no. of digits the fraction point stepped
         if(no_of_digits_are_printed < no_of_digits_the_fraction_point_stepped)
         {
            no_of_digits_are_printed++;
         }

         //if no. of digits are printed < no. of digits the fraction point stepped
         if(no_of_digits_the_fraction_point_stepped != 0)
         {
            if(no_of_digits_are_printed == no_of_digits_the_fraction_point_stepped)
            {
            printf(".");
            no_of_digits_are_printed++;
            }
         }
      }

      //space between the user tries
      printf("\n");

     /* //printf("%lf\n", fraction_part);
      fraction_part = number - (int)number;
      //printf("%lf\n", fraction_part);
      while(fraction_part > 0)
      {
         //printf("%lf\n", fraction_part);
         fraction_part = fraction_part*10;
         printf("%lf\n", fraction_part);
         fraction_digit = (int)fraction_part;
         printf("%d\n", fraction_digit);
         fraction_part = fraction_part - fraction_digit;
         printf("%lf\n", fraction_part);
      }

      if(number != (int)number)
      {
         //printf(".");
      }

      integar_part = (int)number;
      while(integar_part != 0)
      {
         digit = integar_part%10;
         integar_part = integar_part/10;
         //printf("%d", digit);
      }

      printf("\n");*/
    }

    return 0;
}
