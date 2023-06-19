#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[5],i;
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
	printf("\n\nEnter The element you want to search ? \n");
	int key,flag=0;
	scanf("%d",&key);
	for(i=0;i<5;i++)
	{
		if(key==arr[i])
		{
			printf("Element found at %d position ",i+1);
			flag=1;
			break;
		}
		else{
			flag=0;
		}
	}
	if(!flag)
	{
		printf("Not found ");
	}
	
	
}
