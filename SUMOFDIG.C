#include<stdio.h>
int main()
{
int no,i=0,r,a[50],j=0,len,sum=0;
clrscr();
scanf("%d",&no);
if(no>9)
{
for(i=0;no!=0;i++)
{
r=no%10;
no=no/10;
a[i]=r;
len=i;
}
for(i=0;i<=len;i++)
{
for(j=i;j<=len;j++)
{
sum=a[j]+sum;
}
}
}
printf("%d",sum);
getch();
return 0;
}
