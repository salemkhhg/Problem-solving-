/******************************************* start documentation section *************************************************
file name : write a programe to print inverted full pyramid using star pattern
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
    register int counter = 0;
    register int counter2 = 0;
    register int counter3 = 0;
    printf("please enter number the number of raws of your pyramid: ");
    scanf("%i",&number);
    int flag = 0;

    for(counter = number; counter > 0; counter--)
    {

        for(counter3 = 0; counter3 < flag; counter3++)
        {
            printf(" ");
        }
        flag++;
        for(counter2 = 0; counter2 < counter ; counter2++)
        {
            printf("*");
        }


        for(counter2 = 0; counter2 < (counter-1) ; counter2++)
        {
            printf("*");
        }

        printf("\n");
    }





    return 0;
}
