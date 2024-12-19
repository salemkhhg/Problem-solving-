/******************************************* start documentation section *************************************************
file name : write a program that reads a positive integer that check if it is prime or not
author: Salem Sobhy Mohamed
date:8/3/2024
******************************************* end documentation section **************************************************/


/******************************************* start linking section******************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/******************************************* end linking section********************************************************/


/******************************************* start global definition  and  declaration section**************************/
unsigned int number;
unsigned char prime;
unsigned char flag;
/******************************************* end global definition  and  declaration section****************************/

int main()
{
    register unsigned int counter;
    unsigned int check1;
    unsigned int check2;

    printf("please enter a positive number check if it is prime or not : ");
    scanf("%i",&number);
    printf("\n%i\t%i\n", number%5, number%3);
    printf("===================================");


    if(0 < number)
    {
        if(number <= 3)
        {
            printf("\n%i it is prime number\n");
        }

        else
        {
            for(counter = 0; counter <= number; counter++)
            {
                check1 = (6*counter) - 1;
                check2 = (6*counter) + 1;

                if(((number == check2) || (number == check1)))
                {
                        prime = 1;
                        break;

                }



            }
        }

        if(1 == prime)
        {
            printf("\n%i it is prime number\n",number);
        }

        else
        {
            printf("\n%i it is not a prime number\n",number);
        }
    }

    else
    {
        printf("\nerror!! you entered is zero or negative number!!\n ");
    }



    return 0;
}

