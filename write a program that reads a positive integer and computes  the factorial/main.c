/******************************************* start documentation section *************************************************
file name : write a program that reads a positive integer and computes  the factorial
author: Salem Sobhy Mohamed
date:8/3/2024
******************************************* end documentation section **************************************************/


/******************************************* start linking section******************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/******************************************* end linking section********************************************************/


/******************************************* start global definition  and  declaration section**************************/
int number;
unsigned int factorial = 1;
/******************************************* end global definition  and  declaration section****************************/

int main()
{
    register unsigned int counter;
    printf("please enter a positive number to get the factorial   : ");
    scanf("%i",&number);

    if(0 < number)
    {
        for(counter = 1; counter <=number; counter++)
        {
            factorial *= counter;
        }

        printf("factorial of %i = %i",number,factorial);
    }

    else
    {
        printf(" error!! you entered is zero or negative number!!\n ");
    }



    return 0;
}
