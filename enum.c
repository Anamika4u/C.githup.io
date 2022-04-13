#include<stdio.h>
#include<conio.h>
enum week
{
mon=1,
tues,
wed,
thurs,
fri,
sat,
sun};
void main()
{
int d;
printf("enter the day");
scanf("%d",&d);
if(d==mon)
printf("monday are bad.");
else if(d==tues || d==wed || d==thurs)
printf("midweek days are so so");
else if(d==fri)
printf("friday is better.");
else if(d==sat)
printf("weekends are best.");
else
printf("weekends are best");
}
