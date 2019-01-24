#include <stdio.h>

int main(void) {
	int a,i,fact=1;
	printf("enter the number");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
	return 0;
}
