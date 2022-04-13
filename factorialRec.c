#include<stdio.h>
#include<string.h>
#include<conio.h>
int factorial(int);
int main()
{
int n,i;
printf("enter the number you want to calculate factorial:");
scanf("%d",&n);
printf("factorial of %d is %d:",n,factorial(n));
return 0;
}
int factorial(int n)
{
int i;
if(n==0||n==1)
return 1;
return n*factorial(n-1);
}
