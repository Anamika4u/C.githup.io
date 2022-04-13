//display prime number from 1 to 100
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("display prime number from 1 to 100\n");
    for(n=1;n<=100;n++)
    {
       for(i=2;i<=n-1;i++)
          {
             if(n%i==0)
                {
                   break;
                }
          }
        if(i==n)
             {
                 printf("%d prime number\t",i);
             }
    }
}

