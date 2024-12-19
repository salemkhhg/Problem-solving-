/******************************************* start documentation section *************************************************
file name : write a programe to print half pyramid using star pattern
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
/******************************************* end global definition  and  declaration section****************************/

int main()
{
    register unsigned int counter = 0;
    register unsigned int counter2 = 0;
    printf("please enter number the number of raws of your pyramid: ");
    scanf("%i",&number);

    for(counter = 0; counter < number; counter++)
    {
        for(counter2 = 0; counter2 <= counter; counter2++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}



