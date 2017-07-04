#include<stdio.h>
#include<conio.h>
void main()
{
int a,s;
if(a<0)
{
printf("0");
}
else if(a>0)
{
s=a%100;
printf("%d",&s);
}
if(a==0)
{
printf("0");
}
getch();
}