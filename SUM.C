#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0,i;
clrscr();
scanf("%d",&n);
if(n>0)
{
for(i=1;i<=n;i++)
{
sum=sum+i;
}
}
printf("sum of %d natural numbers: %d",n,sum);
getch();
}
