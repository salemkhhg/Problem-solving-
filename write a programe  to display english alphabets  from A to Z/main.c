/******************************************* start documentation section *************************************************
file name : write a program  to display english alphabets  from A to Z
author: Salem Sobhy Mohamed
date:8/3/2024
******************************************* end documentation section **************************************************/


/******************************************* start linking section******************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/******************************************* end linking section********************************************************/


/******************************************* start global definition  and  declaration section**************************/
char character = 'Z';
/******************************************* end global definition  and  declaration section****************************/

int main()
{
    register char counter = 'A';
    for(counter = 'A'; counter <= character; counter++)
    {
        printf("%c\n",counter);
    }

    return 0;
}

