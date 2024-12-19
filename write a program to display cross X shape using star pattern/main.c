/******************************************* start documentation section *************************************************
file name : write a program to display cross X shape using star pattern
author: Salem Sobhy Mohamed
date:7//31/2024
******************************************* end documentation section **************************************************/


/******************************************* start linking section******************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/******************************************* end linking section********************************************************/


/******************************************* start global definition  and  declaration section**************************/
unsigned int number;
/******************************************* end global definition  and  declaration section****************************/

int main()
{
    register int counter1 = 0;
    register int counter2 = 0;
    register int counter3 = 0;


    printf("please enter number the number of raws of your pyramid it must be odd number: ");
    scanf("%i",&number);
    int flag = 0;

    if(1 == number%2)
    {
    for(counter1 = number-1; counter1 > 0; counter1--)
    {
        if(counter1%2)
        {
            printf("*");
            for(counter2 = 0; counter2 < counter1; counter2++)
            {
                printf(" ");
            }
            printf("*\n");


            if(flag >= 0)
            {
                for(counter3 = 0; counter3 <= flag; counter3++)
                {
                    printf(" ");
                }
            }
            flag++;
        }
    }

    flag--;

    printf("*\n");

    for(counter1 = 0; counter1 <= number-1; counter1++)
    {
        if(counter1%2)
        {
            flag--;
            if(flag >= 0)
            {
                for(counter3 = 0; counter3 <= flag; counter3++)
                {
                    printf(" ");
                }
            }

            //printf("flag = %i", flag);
            printf("*");
            for(counter2 = 0; counter2 < counter1; counter2++)
            {
                printf(" ");
            }
            printf("*\n");

        }
    }
    }
    else
    {
        printf("you entered even number!!:)");
    }






    return 0;
}
