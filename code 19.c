/*Program to print the following pattern

  *****     *****  
 *******   ******* 
********* *********
******MySirG*******
 *****************
  ***************  
   *************
    ***********
     *********
      *******
       *****       
        ***
         *

*/

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=19;j++)
        {
            if((j>=4-i && j<=6+i) || (j>=14-i && j<=16+i))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(i=1;i<=1;i++)
    {
        for(j=1;j<=12;j++)
        {
            if(j>=i && j<=7-i)
               printf("*");
            else
            {
                printf("MySirG");
                break;
            }
        }
    }
    for(i=1;i<=1;i++)
    {
        for(j=1;j<=7;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=19;j++)
        {
            if(j>=1+i && j<=19-i)
               printf("*");
            else
               printf(" ");
        }
        printf("\n");
    }
    return 0;
}