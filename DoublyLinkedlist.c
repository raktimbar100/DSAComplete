#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *prev;
	struct node *next;
};
struct node *ptr,*pptr,*head,*temp,*present,*past,*future;
void insertbegin()
{
	ptr=(struct node*)malloc(sizeof(struct node));
	printf("Enter value  :");
	int value;
	scanf("%d",&value);
	if(ptr==NULL)
	{
		printf("Overflow");
	}
	else{
		if(head==NULL)
		{
			ptr->next=NULL;
			ptr->prev=NULL;
			ptr->data=value;
			head=ptr;
			printf("Node Inserted\n");
		
		}
		else{
		
		ptr->data=value;
		ptr->prev=NULL;
		ptr->next=head;
		head->prev=ptr;
	
		
		head=ptr;
		printf("\nNode Inserted\n");
	}
}
	pptr=head;
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}
void insertend()
{
	ptr=(struct node *)malloc(sizeof(struct node));
	printf("Enter value  :");
	int value;
	scanf("%d",&value);
	if(ptr==NULL)
	{
		printf("Overflow");
	}
	else{
			ptr->data=value;
		if(head==NULL)
		{
		
			ptr->next=NULL;
			ptr->prev=NULL;
			head=ptr;
			
		}
		else{
		
	
		ptr->next=NULL;
		pptr=head;
		while(pptr->next!=NULL)
		{
			
			pptr=pptr->next;
		}
		
		ptr->prev=pptr;
		pptr->next=ptr;
		printf("Node Inserted \n");
	}
}
	pptr=head;
	while(pptr!=NULL)
	{
		printf("%d\n",pptr->data);
		pptr=pptr->next;
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
void Deletebegin()
{
	if(head==NULL)
	{
		printf("\nNot possible for deleteion\n");
	}
	else if(head->next==NULL)
	{
		printf("%d Deleted ",head->data);
		head=NULL;
		free(head);
	}
	else{
	
	
	
	pptr=head;
	head=pptr->next;
	head->prev=NULL;
	printf("%d Deleted ",pptr->data);
	free(pptr);
}
}


void deleteend()
{
	if(head==NULL)
	{
		printf("Not able for deletion");
		
	}
	else if(head->next==NULL)
	{
		printf("Deleted %d\n",head->data);
		head=NULL;
		free(head);
	}
	else{
		pptr=head;
		ptr=pptr;
		while(pptr->next!=NULL)
		{
			pptr=pptr->next;
		}
		
		while(ptr->next->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=NULL;
		printf("%d Deleted ",pptr->data);
		free(pptr);
	}
}
void insertatpos()
{
	int pos;
	printf("Enter position to insert : ");
	scanf("%d",&pos);
	if(pos==1)
	{
	  insertbegin();	
	}
	else{
		printf("Enter the values ");
		int val;
		scanf("%d",&val);
		temp=(struct node *)malloc(sizeof(struct node));
		temp->data=val;
		pptr=head;
		ptr=pptr;
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
		pptr->next=temp;
		temp->prev=pptr;
		temp->next=ptr;
		ptr->prev=temp;
	}
}
void deletepos()
{
	int pos;
	printf("Enter position to delete : ");
	scanf("%d",&pos);
	if(pos==1)
	{
	  Deletebegin();	
	}
	
	else{
		if(head->next==NULL)
	{
		printf("Deleted %d\n",head->data);
		head=NULL;
		free(head);
	}
	else if(head==NULL)
	{
		printf("Not able to delete");
	}
	else{
	
		pptr=head;
		ptr=pptr;
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
		ptr->next->prev=pptr;
		printf("%d Deleted",ptr->data);
		free(ptr);
	}
}
}
void reverse()
{
	present=head;
	while(present!=NULL)
	{
//		future=present->next;
//		present->prev=past;
//		present->next=future->prev;
//		past=present;
//		present=future;
	}
}
int main()
{
	
	while(1){
		printf("\nEnter 1 to insert at beginning \n 2 to exit  \n3 to insert at end\n 4 Delete at Beginning \n 5 Delete at End \n 6 Display \n7 Insert at kth position \n8 delete kth position \n9 reverse");
	int n;
	printf("\nEnter your choice : ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			insertbegin();
			break;
		case 2:
			exit(0);
			break;
	    case 3:
	    	insertend();
	    	break;
	    case 4:
	    	Deletebegin();
	    	break;
	    case 5:
	    	deleteend();
	    	break;
	    case 6:
	    	display();
	    	break;
	    case 7:
	    	insertatpos();
	    	break;
	    case 8:
	    	deletepos();
	    	break;
	    case 9:
	    	reverse();
	    	break;
		default:
			printf("\nWrong choice ");
	}
	
}
}
