#include<stdio.h>
#include<conio.h>
int main()
{
char string[100];
int i=0,length=0,a;
clrscr();
gets(string);
a=strlen(string);
for(i=0;i<a;i++)
{
if(string[i]!=' ')
{
length=length+1;
}
}
if(length!=0)
{
printf("%d\n",length);
}
else
{
printf("empty string");
}
getch();
return 0;

}