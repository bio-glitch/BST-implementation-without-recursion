#include<iostream>
using namespace std;
struct bstnode
{
	bstnode* left;
	bstnode* right;
	int data;
};
bstnode* getnewnode(int data)
{
	bstnode* temp=new bstnode();
	temp->right=NULL;
	temp->left=NULL;
	temp->data=data;
	return temp;
}
bstnode* insert(bstnode* root,int data)
{
	bstnode* temp=root;
	if(root==NULL){
	root=getnewnode(data);
	return root;
	}
	while(temp->left!=NULL&&temp->right!=NULL){
	if(data<=temp->data)
	{
		temp=temp->left;
	}
	else if(data>temp->data)
	{
		temp=temp->right;
	}
}
if(temp->right==NULL)temp->right=getnewnode(data);
else if(temp->left==NULL)temp->left=getnewnode(data);
return root;
}
bool search(bstnode* root,int data)
{
	if(root==NULL)return false;
	else if(root->data==data) return true;
	else if(data<=root->data)return search(root->left,data);
	else if(data>root->data)return search(root->right,data);
}
main()
{
	bstnode* root=NULL;
	root=insert(root,2);
	root=insert(root,3);
	root=insert(root,4);
	root=insert(root,5);
	if(search(root,6))cout<<"found";
	else cout<<"not found";
	
}
