#include<iostream>
using namespace std;
class BTreeNode
{
	public:
		BTreeNode(){data=0;left=right=NULL;	}
		BTreeNode* left;
		int data;
		BTreeNode* right;
};
class BTree
{
	public:
		BTree(){Root=NULL;}
		void btreeaddnode(int);
		void preorder(BTreeNode*);
		void inorder(BTreeNode*);
		void postorder(BTreeNode*);
		void levelorder(BTreeNode*);
		BTreeNode* Root;
};
void BTree::btreeaddnode(int tdata)
{
	BTreeNode* newNode=new BTreeNode();
	newNode->data=tdata;
	if(Root==NULL)
	{
		Root=newNode;
	}
	else
	{
		BTreeNode* tmpNode=Root, *curNode;
		while(tmpNode!=NULL)
		{
		curNode=tmpNode;
		if(tdata<tmpNode->data)
			tmpNode=tmpNode->left;
		else
			tmpNode=tmpNode->right;
		}
	if(tdata<curNode->data)
		curNode->left=newNode;
	else
		curNode->right=newNode;
	}
}
void BTree::preorder(BTreeNode*preNode)
{
	if(preNode!=NULL)
	{
		cout<< preNode->data << " ";
		preorder(preNode->left);
		preorder(preNode->right);
	}
}
	void BTree::inorder(BTreeNode* inNode)
	{
		if(inNode!=NULL)
		{
			inorder(inNode->left);
			cout<<inNode->data<<" ";
			inorder(inNode->right);
		}
	}
	void BTree::postorder(BTreeNode* postNode)
	{
		if(postNode!=NULL)
		{
			postorder(postNode->left);
			postorder(postNode->right);
			cout<< postNode->data<<" ";
		}
	}
	int main()
	{
		BTree TR;
		int sayi;
		for(int i=0;i<12;i++)
		{
			cin>>sayi;
			TR.btreeaddnode(sayi);
		}
		cout<< " "<<endl;
		TR.preorder(TR.Root);
		cout<<" "<<endl;
		TR.inorder(TR.Root);
		cout<<" "<<endl;
		TR.postorder(TR.Root);
		cout<<" "<<endl;
	}
