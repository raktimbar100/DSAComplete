#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,arr[5];
	printf("Enter the array elements :\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nYour Given Array is : ");
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	int step;
	for(step=0;step<4;step++)
	{
		for(i=0;i<5-step-1;i++)
		{
			if(arr[i]>arr[i+1])
			{
				int temp=arr[i+1];
				arr[i+1]=arr[i];
				arr[i]=temp;
			}
		}
	}
		printf("\nAfter Bubble Sort Array is : ");
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	
	
}
