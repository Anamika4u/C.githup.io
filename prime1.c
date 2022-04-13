// check number is prime or not
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("check given number is prime number or not\n");
    printf("enter the number of term");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            printf("no is not prime");
            break;
        }
    }
    if(i==n/2+1)
    {
        printf("no.in prime no.");
    }
}
