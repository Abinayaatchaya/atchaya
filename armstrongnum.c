#include<stdio.h>
int main()
{
int num,temp,digit,d=0;
printf("enter the number");
scanf("%d",&num);
temp=num;
if(temp!=0)
{
digit=temp%10;
d=d+digit*digit*digit;
temp=temp/10;
}
if(d==num)
{
printf("%d is an armstrog number",num);
}
else
{
printf("%d is not an armstrong number",num);
}
return 0;
}
