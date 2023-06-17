#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head,*temp,*pptr,*ptr,*present,*past,*future;
void insertbeg()
{
	ptr=(struct node*)malloc(sizeof(struct node));
	printf("Enter value : ");
	int val;
	scanf("%d",&val);
	ptr->data=val;
	if(ptr==NULL)
	{
		printf("Overflow");
	}
	else{
		if(head==NULL)
		{
			head=ptr;
			ptr->next=head;
			
			printf("\nNode inserted\n");
		}
		else{
			pptr=head;
			while(pptr->next!=head)
			{
				pptr=pptr->next;
			}
		
			
			ptr->next=head;
				pptr->next=ptr;
			
			head=ptr;
			printf("\nNode Inserted\n");
			

		}
	}
	
	
}
void insertend()
{
	ptr=(struct node*)malloc(sizeof(struct node));
	printf("Enter value : ");
	int val;
	scanf("%d",&val);
	ptr->data=val;
	if(ptr==NULL)
	{
		printf("Overflow");
	}
	else{
		if(head==NULL)
		{
			head=ptr;
			ptr->next=head;
			
			printf("\nNode Inserted\n");
		}
		else{
			pptr=head;
			while(pptr->next!=head)
			{
				pptr=pptr->next;
			}
			pptr->next=ptr;
			ptr->next=head;
			printf("\nNode Inserted\n");
			
		}
	}
	
}
void insertpos()
{
	int pos;
		ptr=(struct node*)malloc(sizeof(struct node));
	printf("Position :");
	scanf("%d",&pos);
	if(ptr==NULL)
	{
		printf("Overflow");
	}
	else{
	
	if(pos==1)
	{
		
		insertbeg();
	}
	else{
		if(head==NULL)
		{
			head=ptr;
			ptr->next=head;
			printf("\nNode Inserted\n");
		}
		else{
		
		ptr=(struct node*)malloc(sizeof(struct node));
		printf("Enter value to be inserted :");
		int val;
		scanf("%d",&val);
		ptr->data=val;
		int count=1;
		pptr=head;
		temp=pptr;
		while(count!=pos-1)
		{
			pptr=pptr->next;
			count++;
		}
		count=1;
		while(count!=pos)
		{
			temp=temp->next;
			count++;
		}
		ptr->next=temp;
		pptr->next=ptr;
		printf("\nNode Inserted\n");
	}
}
}
}
void deletebeg()
{
	if(head==NULL)
	{
		printf("\nNot able to delete \n");
		
	}
	else{
		if(head->next==head)
		{
			printf("\n%d deleted \n",head->data);
			head=NULL;
			free(head);
		}
		else{
			pptr=head->next;
		    temp=head;
		    while(temp->next!=head)
		    {
		    	temp=temp->next;
			}
			temp->next=pptr;
				printf("\n%d Deleted\n",head->data);
				free(head);
			head=pptr;
			
		
			
		}
	}
}
void deleteend()
{
	if(head==NULL)
	{
		printf("\nNot able to delete\n");
		
	}
	else{
		if(head->next==head)
		{
			printf("\n%d deleted \n",head->data);
			head=NULL;
			free(head);
		}
		else{
			pptr=head;
			temp=pptr;
			while(pptr->next!=head)
			{
				pptr=pptr->next;
			}
			while(temp->next->next!=head)
			{
				temp=temp->next;
			}
			temp->next=head;
			printf("%d Deleted \n",pptr->data);
			free(pptr);
			
		}
	}
}
void deletepos()
{
	printf("Enter position to delete :");
	int pos;
	scanf("%d",&pos);
	if(pos==1)
	{
		deletebeg();
	}
	else{
	if(head->next==head)
		{
			printf("\n%d deleted \n",head->data);
			head=NULL;
			free(head);
		}
		else{
		
	int count=1;
	pptr=head;
	temp=pptr;
	while(count!=pos-1)
	{
		pptr=pptr->next;
		count++;
	}
	count=1;
	while(count!=pos)
	{
		temp=temp->next;
		count++;
	}
	pptr->next=temp->next;
	printf("%d Deleted\n",temp->data);
	free(temp);
}
}
}
void reverse()
{
  present=head;
  while(future!=head)
  {
  	future=present->next;
  	present->next=past;
  	past=present;
  	present=future;
  	
	  }	
	  present->next=past;
	  head=past;
	  
	  
	  
}
void display()
{
	
		pptr=head;
	
	while(pptr->next!=head)
	{
		printf("%d\n",pptr->data);
		pptr=pptr->next;
		
	}
	printf("%d\n", pptr -> data);  
}
int main()
{
	while(1){
	
	printf("Enter 1 to insert begin \n Enter 2 to insert end\n Enter 3 to display \n Enter 4 to insert at kth position\n5 to delete at beginning\n6 to Delete at end \n7 to Delete at kth position\n8 to Reverse\n");
	int choice;
	printf("\nEnter your choice :");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			insertbeg();
			break;
		case 2:
			insertend();
			break;
		case 3:
			display();
			break;
		case 4:
			insertpos();
			break;
		case 5:
			deletebeg();
			break;
		case 6:
			deleteend();
			break;
		case 7:
			deletepos();
			break;
		case 8:
			reverse();
			break;
		default:
			printf("Wrong choice enter again");
	}
	

	
}
}
