#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(j<=6-i || j>=5+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

