#include <stdio.h>

int main(void) {
	int a,rem,sum=0;
	scanf("%d",&a);
	while(a>0)
	{
		rem=a%10;
		sum=sum*10+rem;
		a=a/10;
	
	}
	printf("%d",sum);
	return 0;
}
