#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int answer = 0;

    while(1)
    {
        //Initialize variables
        int number_1 = 0;
        int number_2 = 0;
        char operator_sign ;

        //Enter number
        //printf("Enter a positive integer number: ");
        scanf("%d", &number_1);
        //printf("The first number = %d \n",number_1);

        //Enter number
        //printf("Enter an operator: ");
        scanf(" %c", &operator_sign);
        //printf("The operator = %c \n",operator_sign);

         //Enter number
        //printf("Enter another positive integer number: ");
        scanf("%d", &number_2);
        //printf("The second number = %d \n",number_2);

        //the operation
        switch(operator_sign)
        {
            case '+' :
                answer = number_1 + number_2;
                //print the answer
                printf("The answer = %d \n", answer);
                break;

            case '-' :
                answer = number_1 - number_2;
                //print the answer
                printf("The answer = %d \n", answer);
                break;

            case '*' :
                answer = number_1 * number_2;
                //print the answer
                printf("The answer = %d \n", answer);
                break;

            case '/' :
                answer = number_1 / number_2;
                //print the answer
                printf("The answer = %d \n", answer);
                break;

            default :
                printf("Syntax Error\n" );

        }
    }
    return 0;
}
