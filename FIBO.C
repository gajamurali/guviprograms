#include<stdio.h>
int main()
{
int a=0,b=1,n,f=0;
clrscr();
scanf("%d",&n);
printf("%d\n%d\n",a,b);
n=n-2;
while(n!=0)
{
f=a+b;
a=b;
b=f;
n--;
printf("%d\n",f);
}
getch();
return 0;
}