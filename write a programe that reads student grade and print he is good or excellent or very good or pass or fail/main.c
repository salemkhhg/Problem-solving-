/******************************************* start documentation section *************************************************
file name : write a program that reads student grade and print he is good or excellent or very good or pass or fail
author: Salem Sobhy Mohamed
date:8/1/2024
******************************************* end documentation section **************************************************/


/******************************************* start linking section******************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/******************************************* end linking section********************************************************/


/******************************************* start global definition  and  declaration section**************************/
unsigned char grade;
/******************************************* end global definition  and  declaration section****************************/

int main()
{
    printf("please enter your grade : ");
    scanf("%i",&grade);

    if (((grade <= 100)&& (grade >= 0)))
    {
        if(grade >= 85)
        {
            printf("your grade is excellent \n");
        }

        else if((grade <= 85)&&(grade >=75))
        {
            printf("your grade is very good \n");
        }

        else if((grade <= 75)&&(grade >=65))
        {
            printf("your grade is good \n");
        }

        else if((grade <= 65)&&(grade >=50))
        {
            printf("you pass\n");
        }

        else
        {
            printf("your fail \n");
        }
    }

    else
    {
        printf("error !! you entered a invalid grade!! \n");
    }


    return 0;
}


