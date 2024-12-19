/******************************************* start documentation section *************************************************
file name : write a programe that calculates the area and the circumference
author: Salem Sobhy Mohamed
date:7//31/2024
******************************************* end documentation section **************************************************/


/******************************************* start linking section******************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/******************************************* end linking section********************************************************/


/******************************************* start global definition  and  declaration section**************************/
const float pi = 3.14;
unsigned int radius;
unsigned int area;
unsigned int circumference;
/******************************************* end global definition  and  declaration section****************************/

int main()
{
    printf("please enter the radius of your circle in cm : ");
    scanf("%i",&radius);
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
    printf("\nthe area of your circle = %i cm^2 \tthe circumference of your circle = %i cm\n",area,circumference);

    return 0;
}
