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
float power;
float number;
float result;
/******************************************* end global definition  and  declaration section****************************/

int main()
{
    register unsigned int counter;
    printf("please enter number : ");
    scanf("%f",&number);
    printf("please enter power : ");
    scanf("%f",&power);

    result = pow(number, power);

    printf("=============================\n");

    printf("\nthe power %0.2f of the number %0.2f = %0.5f \n",power,number, result);


    return 0;
}
