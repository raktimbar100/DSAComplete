#include<stdio.h>
#include<stdlib.h>
struct node{
	int item;
	struct node *left;
	struct node *right;
};
struct node* createnode(int val)
{
	struct node* newnode=(struct node *)malloc(sizeof(struct node));
	newnode->item=val;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
struct node* insertleft(struct node* root,int val)
{
	root->left=createnode(val);
	return root->left;
}
struct node* insertright(struct node* root,int val)
{
	root->right=createnode(val);
	return root->right;
}
void inorder(struct node* root)
{
	if(root==NULL)
	  return;
	inorder(root->left);
	printf("%d ",root->item);
	inorder(root->right);
}
void preorder(struct node* root)
{
	if(root==NULL)return;
	printf("%d ",root->item);
	preorder(root->left);
	preorder(root->right);
}
void postorder(struct node* root)
{
	if(root==NULL)return;
	
	postorder(root->left);
	postorder(root->right);
	printf("%d ",root->item);
}
int main()
{
struct node* root=createnode(1);
insertleft(root,12);
insertright(root,9);

insertleft(root->left,5);
insertright(root->left,6);

inorder(root);
printf("\n");
preorder(root);
printf("\n");
postorder(root);
printf("\n");	
	
}
