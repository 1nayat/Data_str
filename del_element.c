#include<stdio.h>
int main()
{
	int a[10],i,j,index,key;
	for(i=0;i<=9;i++)
	{
		printf("Enter element of an array:");
		scanf("%d",&a[i]);
	}
	printf("Enter the element you want to remove :");
	scanf("%d",&key);
	index=9;
	for(i=0;i<=index;i++)
	{
		if (a[i] == key)
		{
			for(j=i+1;j<=index;j++)
			a[j-1] = a[j];
			i--;
			index--;
		}
		}
		printf("Array after removing %d element :", key);
		for(i=0;i<index;i++)
		printf("%d\n",a[i]);
	return 0;
}
