/******************************************* start documentation section *************************************************
file name : write a programe to make a simple calculator using switch
author: Salem Sobhy Mohamed
date:8/1/2024
******************************************* end documentation section **************************************************/


/******************************************* start linking section******************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/******************************************* end linking section********************************************************/


/******************************************* start global definition  and  declaration section**************************/
int number_one;
int number_two;
char opreation;
/******************************************* end global definition  and  declaration section****************************/

int main()
{
    printf("please enter the first number  : ");
    scanf("%i",&number_one);
    printf("please enter the second number : ");
    scanf("%i",&number_two);
    printf("please enter the opreation : ");
    scanf(" %c",&opreation);
    printf("=============================\n");

    switch(opreation)
    {
        case '+' :
            printf("%i %c %i = %i\n",number_one,opreation,number_two,(number_one+number_two));
        break;

        case '-' :
            printf("%i %c %i = %i\n",number_one,opreation,number_two,(number_one-number_two));
        break;

        case '/' :
            printf("%i %c %i = %0.3f\n",number_one,opreation,number_two,((float)number_one/number_two));
        break;

        case '*' :
            printf("%i %c %i = %i\n",number_one,opreation,number_two,(number_one*number_two));
        break;

        default:
        printf("invalide operaion");
        break;
    }



    return 0;
}
