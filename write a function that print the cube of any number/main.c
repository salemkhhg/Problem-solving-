/******************************************* start documentation section *************************************************
file name : write a program to print the cube of any number
author: Salem Sobhy Mohamed
date:8/24/2024
******************************************* end documentation section **************************************************/


/******************************************* start linking section******************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/******************************************* end linking section********************************************************/


/******************************************* start global definition  and  declaration section**************************/
long long cube(long number);
long Number;
long long result;
/******************************************* end global definition  and  declaration section****************************/

int main()
{
    printf("please enter the number that you want to get is cube : ");
    scanf("%ld",&Number);
    result = cube(Number);
    printf("the cube of your number = %lld \n",result);

    return 0;
}

/******************************************* start sub program definition **************************/

long long cube(long number)
{
    return(number*number*number);
}

/******************************************* end sub program definition **************************/
