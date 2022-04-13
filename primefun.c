#include <stdio.h>
#include<conio.h>
void main()
{
int num ,res=0;
printf("\n enter the number");
scanf("%d",&num);
res=prime(num);
if(res==0)
printf("\n prime number");
else
printf("\n not prime");
}
int prime(int n)
{
int i;
for(i=2;i<=n/2;i++)
{
if(n%i!=0)
 continue;
else
return 1;
}
return 0;
}
