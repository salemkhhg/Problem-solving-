/******************************************* start documentation section *************************************************
file name : take two integers from the user and print the result of this equation: result = ((number_1+number_2)*3)-10
author: Salem Sobhy Mohamed
date:7//31/2024
******************************************* end documentation section **************************************************/


/******************************************* start linking section******************************************************/
#include <stdio.h>
#include <stdlib.h>
/******************************************* end linking section********************************************************/


/******************************************* start global definition  and  declaration section**************************/
unsigned int number_1;
unsigned int number_2;
unsigned int result;
/******************************************* end global definition  and  declaration section****************************/

int main()
{
    printf("please enter your first number : ");
    scanf("%i",&number_1);
    printf("please enter your second number : ");
    scanf("%i",&number_2);
    result = ((number_1+number_2)*3)-10;
    printf("result of your equation = %i\n",result);

    return 0;
}

