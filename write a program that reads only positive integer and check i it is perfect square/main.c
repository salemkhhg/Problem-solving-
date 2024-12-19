/******************************************* start documentation section *************************************************
file name : write a program that reads only positive integer and check i it is perfect square
author: Salem Sobhy Mohamed
date:8/1/2024
******************************************* end documentation section **************************************************/


/******************************************* start linking section******************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/******************************************* end linking section********************************************************/


/******************************************* start global definition  and  declaration section**************************/
int number;
unsigned int counter;
unsigned char flag;
/******************************************* end global definition  and  declaration section****************************/

int main()
{
    printf("please enter a positive number that you want to check if it was perfect square or not  : ");
    scanf("%i",&number);

    if(0 < number)
    {
        for(counter = 0; (counter*counter <= number); counter++)
        {
            if ((number == (counter*counter)))
            {
                flag = 1;
            }
        }

        if ((1 == flag))
        {
            printf("your number is perfect square\n");
        }

        else
        {
            printf("your number is not perfect square\n");
        }
    }

    else
    {
        printf(" error!! you entered is zero or negative number!!\n ");
    }



    return 0;
}




