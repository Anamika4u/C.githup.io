#include<stdio.h>
void main()
{
int n;
int fabo(int);
printf("enter the limit of fabonacci series:");
scanf("%d",&n);
printf("fabonacci series using recursion.\n");
for(int i=0;i<n;i++)
printf("%d",fabo(i));
printf("\n");
}
int fabo(int n)
{
if(n<=1)
return n;
return fabo(n-1)+fabo(n-2);
}
