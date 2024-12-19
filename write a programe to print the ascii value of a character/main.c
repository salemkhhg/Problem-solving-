/******************************************* start documentation section *************************************************
file name : write a program to print the ASCII value of a character
author: Salem Sobhy Mohamed
date:7//31/2024
******************************************* end documentation section **************************************************/


/******************************************* start linking section******************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/******************************************* end linking section********************************************************/


/******************************************* start global definition  and  declaration section**************************/
char character;
/******************************************* end global definition  and  declaration section****************************/

int main()
{
    printf("please enter the character that you want to know it's ASCII value : ");
    scanf("%c",&character);
    printf("\nthe ASCII value of your character (%c) = %i\n",character,character);

    return 0;
}
