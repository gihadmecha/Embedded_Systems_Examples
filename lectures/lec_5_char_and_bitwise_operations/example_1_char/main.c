#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        char x ;
        scanf(" %c", &x);
        if(x >= 'A' && x <= 'Z')
        {
            printf("%d %c capital\n", x, x);
            //x = x + 32;
            x = (x -'A') + 'a';
            printf("%d %c small\n", x, x);

        }
        else if(x >= 'a' && x <= 'z')
        {
            printf("%d %c small\n", x, x);
            //x = x - 32;
            x = (x -'a') + 'A';
            printf("%d %c capital\n", x, x);
        }
        else
        {
            printf("%d %c symbol\n", x, x);
        }
    }
    return 0;
}
