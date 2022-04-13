#include<stdio.h>
void main()
{
char s[25],r[25];
void reverse(char[],char[]);
printf("enter string\n");
scanf("%s",s);
reverse(r,s);
printf("reverse of string is :%s\n",r);
}
void reverse(char res[],char scr[])
{
int len,i;
for(len=0;scr[len]!='\0';len++)
for(i=0;i<len;i++)
res[i]=scr[len-i-1];
res[len]='\0';
}
