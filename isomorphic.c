#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str1[50],str2[50];
	int j,i,flag=1,u,v;
	scanf("%s %s",str1,str2);
	int l1=strlen(str1);
	int l2=strlen(str2);
	if(l1==l2)
	{
	for(j=0;j<l1;j++)
	{
		for(i=i+1;i<l2;i++)
		{
			u=str1[j]-str1[i];
			v=str2[j]-str2[i];
			if(u==v)
			{
				flag=0;
			}
			else
			{
				flag=1;
				break;
			}
		}
	}
	}
	else
	{
		printf("\nno");
	}
	if(flag==1)
	{
		printf("\nno");
	}
	else
	{
		printf("\nyes");
	}

	return 0;
}
