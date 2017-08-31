#include<string.h>
#include<conio.h>
#include<stdio.h>
int main()
{
char c,vsml[5]={'a','e','i','o','u'},vcap[5]={'A','E','I','O','U'};
int i,ans=0;
clrscr();
scanf("%c",&c);

if(((c>='a')&&(c<='z'))||((c>='A')&&(c<='Z')))
{
for(i=0;i<5;i++)
{
if((c==vsml[i])||(c==vcap[i]))
{
ans=1;
break;
}
}
if(ans==1)
{
printf("vowel");
}
else
{
printf("consonant");
}
}
else
{
printf("not an alphabet");
}
getch();
return 0;
}