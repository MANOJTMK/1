#include <stdio.h>
void main()  {
	int t;
	scanf("%d",&t);
	while(t)
	{
	int number;
	printf("enter the number");
	scanf("%d",&number);
	if(number>0)
	{
		printf("postive");
	}
else if(number<0)
{
	printf("negtive");
}
else
{
	printf("zero");
}
t--;
}
	'getch';
}
