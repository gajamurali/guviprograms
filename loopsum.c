#include<stdio.h>
#include<conio.h>
void main()
{
int n,s=0,i;
clrscr();
scanf("%d",&n);
if(n>0)
{
for(i=1;i<=n;i++)
{
s=s+i;
}
printf("sum of %d natural numbers: %d",n,s);
}
else
{
printf("wrong entry");
}
getch();
}