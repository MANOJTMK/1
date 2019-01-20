#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d",&t);
	while(t)
	{
	int year;
	printf("enter the year");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("yes");
	}
	else
	{
	printf("no");
	}
	t--;
	}
	return 0;
	}
