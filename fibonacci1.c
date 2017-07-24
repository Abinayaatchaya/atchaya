#include <stdio.h>

int main(void) {
	int i,n,first=0,second=1,next;
	first=0,second=1;
	printf("enter the number");
	scanf("%d",&n);
	printf("fibonacci series are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",first);
		next=first+second;
		first=second;
		second=next;
	}
	return 0;
}
