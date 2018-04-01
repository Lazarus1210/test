#include<iostream>
using namespace std;

typedef struct btree
{
	int data;
	struct btree *left;
	struct btree *right;
}btree;

btree *newNode(int val)
{
	btree *temp = new btree;
	if(temp!=NULL)
	{
		temp->data = val;
		temp->left = NULL;
		temp->right = NULL;
		return temp;
	}
	return temp;
}

void inorder(btree *root)
{
	if(root)
	{
		inorder(root->left);
		cout<<root->data<<"\t";
		inorder(root->right);
	}
}

int main(void)
{
	btree *root = newNode(1);
	/* Level 1*/
	root->left = newNode(2);
	root->right = newNode(3);
	/* Level 2 */
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(6);
	root->right->right = newNode(7);
	/* Level 3 */
	root->left->left->left = newNode(8);
	root->left->left->right = newNode(9);
	root->right->left->left = newNode(10);
	inorder(root);
	cout<<endl;
	return 0;
}
