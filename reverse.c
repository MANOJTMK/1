#include <stdio.h>
 
int main(void) {
char a[100],d[100];
int i,j,k=0,c=0;
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
    c++;
}
k=0;
for(j=c-1;j>=0;j--)
{
    d[k]=a[j];
    k++;
}
printf("%s",d);
    return 0;
}
 
