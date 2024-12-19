/******************************************* start documentation section *************************************************
file name : write a program to calculate the power of a number
author: Salem Sobhy Mohamed
date:7//31/2024
******************************************* end documentation section **************************************************/


/******************************************* start linking section******************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/******************************************* end linking section********************************************************/


/******************************************* start global definition  and  declaration section**************************/
int number;
int reversed;
int reminder;
char flag = 0;
/******************************************* end global definition  and  declaration section****************************/

int main()
{
    register unsigned int counter;
    printf("please enter number you want to reverse : ");
    scanf("%i",&number);

    if(number < 1)
    {
        number *= (-1);
        flag = 1;
    }

    while(number != 0)
    {
        reminder = number % 10;
        reversed = reversed * 10 + reminder;
        number /= 10;
    }

    if(1 == flag)
    {
        printf("reversed number = %i",-1* reversed);
    }

    else
    {
        printf("reversed number = %i", reversed);
    }




    return 0;
}
