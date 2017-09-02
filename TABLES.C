#include<stdio.h>
int main()
{
int n,i,sum=0;
clrscr();
scanf("%d",&n);
if(n>=1)
{
for(i=1;i<=12;i++)
{
sum=i*n;
printf("%d * %d =%d\n",n,i,sum);
}
}
else
{
printf("not a valid number");
}
getch();
return 0;
}