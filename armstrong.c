#include<stdio.h>
int main()
{
int num,temp,digit,d=0;
printf("enter the number");
scanf("%d",&num);
tenp=num;
if(temp%10=0)
{
digit=num%10;
d=d+digit*digit*digit;
num=num/10;
}
if(d==temp)
{
printf("%d is an armstrog number",num);
}
else
{
printf("%d is not an armstrong number",num);
}
return 0;
}
