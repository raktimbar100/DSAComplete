#include<stdio.h>
#include<stdlib.h>
int main()
{
		int i,arr[5],min;
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
	int step,flag=0;
	for(step=0;step<4;step++)
	{
		min=step;
	
		for(i=step+1;i<5;i++)
		{
			if(arr[min]>arr[i])
			{
			  min=i;
			  
			}
		}
		
		int temp=arr[step];
		arr[step]=arr[min];
		arr[min]=temp;	
		
		
	}
		printf("\nAfter Selection Sort Array is : ");
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
}
