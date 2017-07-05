#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
int n,s,i=2;
clrscr();
scanf("%d",&n);
if(n<0)
{
printf("not a valid entry");
}
else
{
s=n%i;
if(s==0)
{
printf("it is a even number");
}
else
{
printf("it is a odd number");
}
}
getch();
}