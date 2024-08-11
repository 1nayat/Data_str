#include<stdio.h>
int main()
{
	int a[10],i,j,pos,val;
	for(i=0;i<=8;i++)
	{
		printf("Enter Number :\n");
		scanf("%d",&a[i]);
	}
	printf("Enter the index :");
	scanf("%d\n",&pos);
	printf("Enter the value :");
	scanf("%d",&val);
	for(i=8;i>=pos;i--)
	{
		a[i+1] = a[i];	
	}
	a[pos] = val;
	printf("Enter after insertion : \n");
	for(i=0;i<=9;i++)
	printf("%d\n",a[i]);
	return 0;
}
