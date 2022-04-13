#include<stdio.h>
#include<conio.h>
enum planet
{
mercury=1,
venus,
earth,
mars,
jupiter,
saturn,
uranus,
neptune
};
void main()
{
int p;
printf("enter the planet ");
scanf("%d",&p);
if(p==mercury)
printf("closest to sun.");
else if (p==venus||p==earth)
printf("near to sun.");
else if (p==mars||p==jupiter)
printf("far from sun.");
else if(p==uranus)
printf("very far from sun.");
else
printf("neptune is very far planet from sun");
}

