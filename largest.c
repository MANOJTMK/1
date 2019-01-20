#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d",&t);
	while(t)
	{
		int a,b,c;
		printf("enter the values");
		scanf("%d%d%d",&a,&b,&c);
		if(a>b)
		{
			printf("%d is" ,a);
		}
		 if(b>c)
		{
			printf("%d",b);
		}
		if(c>a)
		{
			printf("%d",c);
		}
		t--;
		}
		return 0;
}
