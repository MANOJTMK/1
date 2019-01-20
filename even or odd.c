#include<stdio.h>
#include<conio.h>
void main()
{
int t;
printf("enter the test case");
scanf("%d",&t);
while(t)
{
int num;
printf("enter the number");
scanf("%d",&num);
if(num%2==0)
{
printf("EVEN");
}
else
{
printf("ODD");
}
t--;
}
getch();
}


 
