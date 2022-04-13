#include<stdio.h>
#include<conio.h>
enum month{
jan=31,
feb=28,
mar=31,
apr=30,
may=31,
june=30,
july=31,
august=31,
sept=30,
oct=31,
nov=30,
dec=31
};
void main()
{
int m;

m=jan+feb;
printf("%d number of days .",m);
}
