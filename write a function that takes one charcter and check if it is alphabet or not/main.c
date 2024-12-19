/******************************************* start documentation section *************************************************
file name : write a program that take one character and checks if it was alphabet or not
author: Salem Sobhy Mohamed
date:8/24/2024
******************************************* end documentation section **************************************************/


/******************************************* start linking section******************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/******************************************* end linking section********************************************************/


/******************************************* start global definition  and  declaration section**************************/
char character;
void check(char alpha);
/******************************************* end global definition  and  declaration section****************************/

int main()
{
    printf("please enter the character you want to check : ");
    scanf(" %c", &character);
    check(character);

    return 0;
}

/******************************************* start sub program definition **************************/
void check(char alpha)
{
    register unsigned int counter;
    unsigned int flag = 0;

    for(counter = 'a'; counter <= 'z'; counter++)
    {
        if(alpha == counter)
        {

            flag = 1;
            break;
        }

    }
    for(counter = 'A'; counter <= 'Z'; counter++)
    {
        if(alpha == counter)
        {
            flag = 1;
            break;
        }

    }

    if(1 == flag)
    {
        printf("your character is an alphabet\n");
    }

    else
    {
        printf("your character is not an alphabet\n");
    }

}
/******************************************* end sub program definition **************************/
