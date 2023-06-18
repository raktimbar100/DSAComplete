#include<stdio.h>
#include<stdlib.h>
#define MAX 10
struct stack{
	int place[MAX];
	int top;
};
typedef struct stack st;
st *s;

int count=0;
int isEmpty(st *s)
{
	if(s->top==-1)
	{
		
		return 1;
	}
	return 0;
}
void push(st *s)
{
	
	printf("\nEnter value to be inserted :");
	int val;
	scanf("%d",&val);
	if(isEmpty(s))
	{
		s->top=-1;
		
	}
	if(isFull(s))
	{
		printf("\nOverflow\n");
	}
    else{
    	s->top++;
    	s->place[s->top]=val;
    	printf("\nPushed\n");
	}
	count++;
}
void pop(st *s)
{
	if(isEmpty(s))
	{
		printf("Not Posssible");
		
	}
	else{
	
	printf("\nPopped %d \n ",s->place[s->top--]);
	//s->top--;
}
count--;
}
void peek(st *s)
{
	if(isEmpty(s))
	{
		printf("\nUnderflow Condition\n");
		
	}
	else{
	
	printf("\n Peek Element is : ");
    printf("%d ",s->place[s->top]);	
}
}
void createemptystack(st *s)
{

	s->top=-1;
}
void display(st *s)
{
	if(isEmpty(s))
	{
		printf("\nNothing to display\n");
	}
	else{

int i;
for(i=s->top;i>=0;i--)
{
	printf("\n%d\n",s->place[i]);
}
}	
}
int isFull(st *s)
{
	if(s->top==MAX-1)
	{
		return 1;
	}
	return 0;
}

int main()
{
	s=(st *)malloc(sizeof(st));
	createemptystack(s);
	while(1)
	{
		printf("\nEnter 1 to Push \nEnter 2 to Pop \nEnter 3 to find Peek\nEnter 4 to display\n");
		int choice;
		printf("\nEnter Your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				
				push(s);
				break;
			case 2:
				pop(s);
				break;
			case 3:
				peek(s);
				break;
			case 4:
				display(s);
				break;
			default:
				printf("Enter again right choice\n");
		}
	}
}
