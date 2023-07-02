#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node{
	int item;
	struct node *left;
	struct node *right;
};
struct node* createnode(int val)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->item=val;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}

bool isfullBinarytree(struct node *root)
{
	if(root==NULL)
	  return true;
	if(root->left==NULL && root->right==NULL)
	{
		return true;
	}
	if(root->left&&root->right)
	{
		return (isfullBinarytree(root->left)&&isfullBinarytree(root->right));
	}
	return false;
}
int main()
{
	struct node* root=NULL;
	root = createnode(1);
  root->left = createnode(2);
  root->right = createnode(3);

  root->left->left = createnode(4);
  root->left->right = createnode(5);
  root->left->right->left = createnode(6);
  root->left->right->right = createnode(7);

	if(isfullBinarytree)
	{
		printf("Full Binary tree");
	}
	else{
		printf("the tree is not full binary tree");
	}
}
