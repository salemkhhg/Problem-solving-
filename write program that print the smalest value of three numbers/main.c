/******************************************* start documentation section *************************************************
file name : write program that print the smallest value of three numbers
author: Salem Sobhy Mohamed
date:8/1/2024
******************************************* end documentation section **************************************************/


/******************************************* start linking section******************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/******************************************* end linking section********************************************************/


/******************************************* start global definition  and  declaration section**************************/
int number_one;
int number_two;
int number_three;
/******************************************* end global definition  and  declaration section****************************/

int main()
{
    printf("please enter the first number  : ");
    scanf("%i",&number_one);
    printf("please enter the second number : ");
    scanf("%i",&number_two);
    printf("please enter the third number : ");
    scanf("%i",&number_three);

    if ( (number_one < number_two) )
    {
        if((number_one < number_three))
        {
            printf("first number is the smallest number\n");
        }
        else
        {
            printf("third number is the smallest number\n");
        }
    }

    else
    {
        if((number_two < number_three))
        {
            printf("second number is the smallest number\n");
        }
        else
        {
            printf("third number is the smallest number\n");
        }
    }



    return 0;
}



