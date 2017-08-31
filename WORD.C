#include<stdio.h>
#include<string.h>
int main()
{
char line[100];
int length,i=0,words=1;
clrscr();
gets(line);
length=strlen(line);
for(i=0;i<=(length-1);i++)
{
if(line[i]==' ')
{
words=words+1;
}
}
printf("%d",words);
getch();
return 0;
}