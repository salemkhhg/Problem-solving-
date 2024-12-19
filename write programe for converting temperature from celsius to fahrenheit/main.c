/******************************************* start documentation section *************************************************
file name : write programe for converting temperature from celsius to fahrenheit
author: Salem Sobhy Mohamed
date:7//31/2024
******************************************* end documentation section **************************************************/


/******************************************* start linking section******************************************************/
#include <stdio.h>
#include <stdlib.h>
/******************************************* end linking section********************************************************/


/******************************************* start global definition  and  declaration section**************************/
unsigned int temperature;
/******************************************* end global definition  and  declaration section****************************/

int main()
{
    printf("please enter the temperature in celsius :  ");
    scanf("%i",&temperature);

    float result = temperature * 1.8 + 32;

    printf("temperature in fahernheit = %0.0lf\n",result);

    return 0;
}

