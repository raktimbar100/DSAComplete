#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head,*pptr,*ptr,*temp,*present,*past,*future;
void insertbeg()
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data value : ");
	int val;
	scanf("%d",&val);
	if(temp==NULL)
	{
		printf("Overflow\n");
	}
	else{
		temp->data=val;
		temp->next=head;
		head=temp;
		printf("\nNode Inserted\n");
	}
	pptr=head;
	while(pptr!=NULL)
	{
		printf("%d\n",pptr->data);
		pptr=pptr->next;
	}
}
void insertatend()
{
	ptr=(struct node*)malloc(sizeof(struct node));
	printf("Enter values : ");
	int val;
	scanf("%d",&val);
	ptr->data=val;
	if(ptr==NULL)
	{
		printf("Overflow ");
	}
	else
	{
	  if(head==NULL)
	  {
	  	ptr->next=NULL;
	  	head=ptr;
	  	printf("\nNode Inserted ");
	  	pptr=head;
	while(pptr!=NULL)
	{
		printf("%d\n",pptr->data);
		pptr=pptr->next;
	}
	  }
	  else{
	  	pptr=head;
	  	while(pptr->next!=NULL)
	  	{
	  		pptr=pptr->next;
		  }
		  pptr->next=ptr;
		  ptr->next=NULL;
		  printf("Node Inserted\n");
		  pptr=head;
	while(pptr!=NULL)
	{
		printf("%d\n",pptr->data);
		pptr=pptr->next;
	}
	  }
	}
}
void deletebeg()
{
	if(head==NULL)
	{
		printf("\nNot Able to delete Anymore\n");
	}
	else{
	
	pptr=head->next;
	ptr=head;
	head=pptr;
	printf("\nDeleted %d\n",ptr->data);
	free(ptr);
	pptr=head;
	while(pptr!=NULL)
	{
		printf("%d\n",pptr->data);
		pptr=pptr->next;
	}
}
}
void deleteend()
{
	if(head==NULL)
	{
		printf("\nNot Able to delete Anymore\n");
	}
	else{
	if(head->next==NULL)
	{
		printf("\n%d Deleted\n",head->data);
		head=NULL;
		free(head);
		
	}
	else{
	
	pptr=head;
	while(pptr->next!=NULL)
	{
		pptr=pptr->next;
	}
    ptr=head;
    while(ptr->next->next!=NULL)
    {
    	ptr=ptr->next;
	}
	ptr->next=NULL;
	printf("\n%d Deleted \n",pptr->data);
	pptr=head;
	while(pptr!=NULL)
	{
		printf("%d\n",pptr->data);
		pptr=pptr->next;
	}
}
}
}
void insertatposition()
{
	ptr=(struct node*)malloc(sizeof(struct node));
	int pos,data;
	printf("Enter the position : ");
	scanf("%d",&pos);

	pptr=head;
	temp=pptr;
	int count=1;
	
	if(pos==1)
	{
		insertbeg();
	}
	else{
		
	if(head==NULL)
	{
		printf("Overflow");
	}
	else{
	if(head->next==NULL && pos==2)
	{
		insertatend();
	}
	else if(head->next==NULL && pos==1)
	{
		insertbeg();
	}
	else{
	printf("Enter the value to be inserted :");
	scanf("%d",&data);
	ptr->data=data;
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
	pptr->next=ptr;
	ptr->next=temp;
	printf("Node Inserted");
}
}
}
}
void deleteposition()
{
	pptr=head;
	ptr=pptr;
	printf("Enter position to delete node :");
	int pos;
	scanf("%d",&pos);
	if(head==NULL){
		printf("Not possible");
	}
	else{
		if(head->next==NULL && pos==1)
		{
			deletebeg();
		}
		else{
			int count=1;
			while(count!=pos-1)
			{
				pptr=pptr->next;
				count++;
			}
			count=1;
			while(count!=pos)
			{
				ptr=ptr->next;
				count++;
			}
			pptr->next=ptr->next;
			printf("\n Deleted %d\n",ptr->data);
			
			free(ptr);
		}
		
		
	}
		
	
}
void display()
{
	pptr=head;
	while(pptr!=NULL)
	{
		printf("%d\n",pptr->data);
		pptr=pptr->next;
	}
}
void reverse()
{
	present=head;
	while(present!=NULL)
	{
		future=present->next;
		present->next=past;
		past=present;
		present=future;
		
		
	}
	head=past;
}
int main()
{
	

	while(1){
		printf("\nEnter 1 to insert at beginning \n 2 to exit  \n3 to insert at end\n 4 Delete at Beginning \n 5 Delete at End \n 6 Insert at kth position \n7 Display \n8 delete kth position \n9 reverse");
	int n;
	printf("\nEnter your choice : ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			insertbeg();
			break;
		case 2:
			exit(0);
			break;
	    case 3:
	    	insertatend();
	    	break;
	    case 4:
	    	deletebeg();
	    	break;
	    case 5:
	    	deleteend();
	    	break;
	    case 6:
		    insertatposition();
		    break;
	    case 7:
	    	display();
	    	break;
	    case 8:
	    	deleteposition();
	    	break;
	    case 9:
	    	reverse();
	    	break;
		default:
			printf("\nWrong choice ");
	}
	
}
}
