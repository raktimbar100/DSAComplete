#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1,item[10];
void enqueue()
{
	printf("Enter value to insert : ");
	int val;
	scanf("%d",&val);
	if(rear==9)
	{
		printf("\nQueue is full can't insert anymore\n");
	}
	if(front==-1 )
	{
		front=0;
	}
		item[++rear]=val;
		printf("\nItem Inserted\n");

	
}
void dequeue()
{
	if(rear==-1 )
	{
		printf("\nQueue is Empty can't perform delete operation \n");
	}
	else{
		printf("\nDeleted %d : ",item[front++]);
		if(front>rear)
		{
			front=rear=-1;
		}
	}
}
void display()
{
	if(front==-1 && rear == -1)
	{
		printf("Empty Queue ");
	}
	else{
	
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%d ---- ",item[i]);
	}
}

}
int main()
{
	while(1)
	{
		int choice;
		printf("\nEnter 1 to insert into queue \nEnter 2 to delete from queue \nEnter 3 to display the queue\n");
	  printf("\nEnter your choice ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			default:
				printf("\nWrong choice Enter again\n");
		}
	}
	
	
}
