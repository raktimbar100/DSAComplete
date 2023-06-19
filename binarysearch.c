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
	int key;
	scanf("%d",&key);
	int start=0;
	int end=4;
	while(start<=end)
	{
		int mid=start+(end-start)/2;
		if(arr[mid]==key)
		{
			printf("Element found at %d position ",mid+1);
			break;
		}
		else if(arr[mid]>key)
		{
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	printf("Element is not present in this array");
}
