/*Program to print the following pattern

*
**
* *
*  *
*****

*/

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
                if(j==1 || i==5 || j==i)
                   printf("*");
                else
                   printf(" ");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}