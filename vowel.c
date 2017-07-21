#include<stdio.h>
int main()
{
char c;
int lowercase level,uppercase level;
printf("enter the alphabet");
scanf("%c",&c);
lowercase level(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
uppercase level(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(lowercase level||uppercase level)
printf("%c is a vowel",c);
else
printf("%c is a consonants",c);
return 0;
}
