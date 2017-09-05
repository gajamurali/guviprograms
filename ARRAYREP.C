#include<stdio.h>
int main()
{
int a[100],n,i,j,choice=0,repeat=0;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
if(choice!=1)

for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
choice=1;
repeat=a[i];
break;
}
}
}
if(choice==1)
{
printf("Repeated 1st value in the array is:%d in the locations",repeat);
for(i=0;i<n;i++)
{
if(repeat==a[i])
{
printf("\n%d",(i+1));
}
}
}
getch();
return 0;
}
