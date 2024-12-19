/******************************************* start documentation section *************************************************
file name : write a program to check that the two number are equal or not and which one is higher
author: Salem Sobhy Mohamed
date:7//31/2024
******************************************* end documentation section **************************************************/


/******************************************* start linking section******************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/******************************************* end linking section********************************************************/


/******************************************* start global definition  and  declaration section**************************/
unsigned int number_one;
unsigned int number_two;
/******************************************* end global definition  and  declaration section****************************/

int main()
{
    printf("please enter the first number  : ");
    scanf("%i",&number_one);
    printf("please enter the second number : ");
    scanf("%i",&number_two);

    if ((number_one == number_two))
    {
        printf("\nthe first number equal to the second number\n");
    }

    else
    {
        if (number_one > number_two)
        {
            printf("\nthe first number is greater than the second number\n");
        }
        else
        {
            printf("\nthe second number is greater than the first number\n");
        }
    }

    return 0;
}

