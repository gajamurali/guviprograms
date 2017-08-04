void main()
{
int num,i,sum=0;
clrscr();
if(scanf("%d",&num)!=1)
{
printf("\nIt is not number(i.e string)");
}
else
{
if(num<=0)
{
printf("\nnegative value");
}
else
{
for(i=1;i<=num;i++)
{
sum=sum+num;
}
printf("\n%d",sum);
}
}
getch();
}