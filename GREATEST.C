#include<stdio.h>
int main()
{
int n1,n2,n3,n;
scanf("%d%d%d",&n1,&n2,&n3);
n= n1>n2 ? (n1>n3 ? n1:n3):(n2>n3 ? n2:n3);
printf("\n greatest number is= %d",n);
getch();
return 0;
}