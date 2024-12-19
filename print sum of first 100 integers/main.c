/******************************************* start documentation section *************************************************
file name : write program that print the sum of first 100 integers
author: Salem Sobhy Mohamed
date:8/1/2024
******************************************* end documentation section **************************************************/


/******************************************* start linking section******************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/******************************************* end linking section********************************************************/


/******************************************* start global definition  and  declaration section**************************/

unsigned int summing;
/******************************************* end global definition  and  declaration section****************************/

int main()
{
    for(register unsigned int counter = 0; counter <= 100; counter++)
    {
        summing+=counter;
    }

    printf("sum of first 100 integers = %i",summing);

    return 0;
}



