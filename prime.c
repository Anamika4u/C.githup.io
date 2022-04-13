//first 100 prime number
#include<stdio.h>
#include<conio.h>
void main()
{
    int f=0,i,j;
    printf("first 100 prime number\n ");
    j+=2;
    int n=j;
    while(j<=100)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            printf("%d\t",n);
            j++;
        }
        n++;
        f=0;
    }
}
