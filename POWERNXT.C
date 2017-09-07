#include<stdio.h>
int main()
{
int no,i=0,r,a[50],b[50],len,sum=0,j,power=1,k=0;
clrscr();
scanf("%d",&no);
for(i=0;no!=0;i++)
{
r=no%10;
no=no/10;
a[i]=r;
len=i;
}
for(i=0;i<=len;i++)
{
b[i]=a[len-i];
}
for(i=0;i<=len;i++)
{
k=i+1;
if(i==len)
{
k=0;
}
for(j=a[k];j>0;j--)
{
power=power*a[i];
}
sum=sum+power;
power=1;
}

printf("%d",sum);
getch();
return 0;
}
