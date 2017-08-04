#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum=0,s=0;
clrscr();
for(i=1;i<=15;i++)
{
sum=sum+i;
}
printf("%d\n",sum);
for(i=15;i<=45;i++)
{
if((i%2)!=0)
{
s=s+i;
}
}
printf("%d\n",s);

getch();
}