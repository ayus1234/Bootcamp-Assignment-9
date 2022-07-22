/*Program to print the following pattern

ABCDEFGFEDCBA
ABCDEF FEDCBA
ABCDE   EDCBA
ABCD     DCBA
ABC       CBA
AB         BA
A           A

*/

#include<stdio.h>
int main()
{
    int i,j;
    char k;
    for(i=1;i<=7;i++)
    {
        k='A';
        for(j=1;j<=13;j++)
        {
            if(j<=8-i || j>=6+i)
            {
                printf("%c",k);
                j<7?k++:k--;
            }
            else
            {
                printf(" ");
                if(j==7)
                   k--;
            }
        }
        printf("\n");
    }
    return 0;
}