#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *prev;
	struct node *next;
};
struct node *head,*temp,*ptr,*pptr,*past,*present,*future;
void insertbeg()
{
	ptr=(struct node*)malloc(sizeof(struct node));
  		printf("Enter value to be inserted :");
  		int val;
  		scanf("%d",&val);
  		ptr->data=val;
  if(ptr==NULL)
  {
  	printf("\nOverflow\n");
  }
  else{
  	if(head==NULL)
  	{
  		
  		head=ptr;
  		ptr->next=head;
  		ptr->prev=ptr->next;
  			printf("\nNode Inserted\n\n");
	  }
	  else{
	  		
  		pptr=head;
  		while(pptr->next!=head)
  		{
  			pptr=pptr->next;
		  }
  		ptr->next=head;
  		ptr->prev=pptr;
  		pptr->next=ptr;
  		head=ptr;
  		printf("\nNode Inserted\n\n");
  		
	  }
  }
}
void insertend()
{
	ptr=(struct node*)malloc(sizeof(struct node));
  		printf("Enter value to be inserted :");
  		int val;
  		scanf("%d",&val);
  		ptr->data=val;
  if(ptr==NULL)
  {
  	printf("\nOverflow\n");
  }
  else{
  	if(head==NULL)
  	{
  		
  		head=ptr;
  		ptr->next=head;
  		ptr->prev=ptr->next;
  			printf("\nNode Inserted\n\n");
	  }
	  else{
	  	pptr=head;
	  	while(pptr->next!=head)
	  	{
	  		pptr=pptr->next;
		  }
		  ptr->prev=pptr;
		  ptr->next=head;
  		  pptr->next=ptr;
  		  
  		printf("\nNode Inserted\n\n");
  		
	  }
  }
}
void insertpos()
{
	ptr=(struct node*)malloc(sizeof(struct node));
	printf("Enter position to be inserted :");
	int pos;
	scanf("%d",&pos);
  		printf("Enter value to be inserted :");
  		int val;
  		scanf("%d",&val);
  		ptr->data=val;
  		if(ptr==NULL)
  {
  	printf("\nOverflow\n");
  }
  else{
  	if(head==NULL)
  	{
  		
  		head=ptr;
  		ptr->next=head;
  		ptr->prev=ptr->next;
  			printf("\nNode Inserted\n\n");
	  }
	  else{
	  	pptr=head;
	  	temp=pptr;
	  	int count=1;
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
		  ptr->prev=pptr;
		  ptr->next=temp;
		  pptr->next=ptr;
		  temp->prev=ptr;
		  printf("\nNode Inserted\n\n");
	  }
}
}
void deletebeg()
{
	if(head==NULL)
	{
	  printf("Cant be deleted\n");	
	}
	else{
		if(head->next==head)
		{
			printf("\n%d Deleted\n",head->data);
			head=NULL;
			free(head);
			
		}
		else{
		
		pptr=head;
		temp=pptr->next;
		while(pptr->next!=head)
		{
			pptr=pptr->next;
			
		}
		pptr->next=temp;
		temp->prev=pptr;
		printf("\n%d Deleted\n",head->data);
		free(head);
		head=temp;
		
	}
}
}
void deleteend()
{
	if(head==NULL)
	{
	  printf("Cant be deleted\n");	
	}
	else{
		if(head->next==head)
		{
			printf("\n%d Deleted\n",head->data);
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
			head->prev=temp;
			printf("\n%d Deleted \n",pptr->data);
		}
    }
}
void deletepos()
{
	printf("Enter Position to delete :");
	int pos;
scanf("%d",&pos);
	if(head==NULL)
	{
	  printf("Cant be deleted\n");	
	}
	else{
		if(head->next==head)
		{
			printf("\n%d Deleted\n",head->data);
			head=NULL;
			free(head);
			
		}
		else if(pos==1)
		{
			deletebeg();
		}
	else{
	
	
	
pptr=head;
temp=pptr;
int count=1;
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
temp->next->prev=pptr;
printf("\n%d Deleted \n",temp->data);
free(temp);
}
}
}
void display()
{
	pptr=head;
	while(pptr->next!=head)
	{
		printf("%d\n",pptr->data);
		pptr=pptr->next;
	}
	printf("%d\n",pptr->data);
}
//void reverse()
//{
//	if(head==NULL)
//	{
//		printf("Not Able to Reverse \n");
//	}
//	else{
//		present=head;
//		
//	}
//}
int main()
{
	while(1){
	
	printf("Enter 1 to insert at begin \n Enter 2 to Display\n Enter 3 to insert at End \n Enter 4 to insert at kth position \nEnter 5 to Delete at beginning\nEnter 6 to Delete at end\n Enter 7 to Delete at kth position\nEnter 8 to reverse\n");
	int choice;
	printf("Enter Your choice :");
	scanf("%d",&choice);
    switch(choice)
	{
		case 1:
			insertbeg();
			break;
		case 2:
			display();
			break;
		case 3:
			insertend();
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
			printf("Wrong Choice ");
		
	}	
	
	


   }
}
