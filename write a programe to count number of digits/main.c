/******************************************* start documentation section *************************************************
file name : write a program to count number digits
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
unsigned int reminder;
/******************************************* end global definition  and  declaration section****************************/

int main()
{
    register unsigned int counter = 0;
    printf("please enter number to count it's digits: ");
    scanf("%i",&number);



    while(number != 0)
    {
        reminder = number % 10;
        number /= 10;
        counter++;
    }

    printf("number of digits = %i",counter);

    return 0;
}
