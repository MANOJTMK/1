#include <stdio.h>
void main()
{
	int t;
	scanf("%d",&t);
	while(t)
	{
		char ch;
		printf("enter the character");
		scanf("%c",&ch);
		if ((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
		{
		printf("alphabet");
		}
		else
		{
		printf("no");
		}
		t--;
	}
	'getch';
}
