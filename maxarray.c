#include<stdio.h>
#include<conio.h>
int main()
{
int a[20],i,n,max;
printf("enter size of the array:");
scanf("%d",&n);
printf("enter the element in array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
if(max<a[i])
max=a[i];
}
printf("\n maximum of array is :%d",max);
return 0;
}
