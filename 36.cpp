#include<iostream>
using namespace std;
class BTreeNode
{
	public:
		BTreeNode* min(BTreeNode*);
		BTreeNode* max(BTreeNode*);
		BTreeNode* succ(BTreeNode*);
		BTreeNode* pred(BTreeNode*);
		BTreeNode* tnodesearch(BTreeNode*,int);
		void tnodedelete(BTreeNode*,int);
};
    BTreeNode* BTree::min(BTreeNode* troot)
{
	if(troot!=NULL&&troot->left!=NULL)
	{
		while(troot ->left!?NULL)troot=troot->left;
	}
	return troot;
}
    BTreeNode* BTree::max(BTreeNode* troot)
{
	if(troot!=NULL&&troot->right!=NULL)
	{
		while(troot->right!=NULL) troot=troot->right;
	}
	return troot;
}
BTreeNode* BTree::succ(BTreeNode* troot)
{
	if(troot->right==NULL)
	return NULL;
	   else
	   return min(troot->right);
}
BTreeNode* BTree::pred(BTreeNode* troot)
{
	if(troot->left=NULL) 
	return NULL;
		else 
		return max(troot->left);
}
BTreeNode* BTree::tnodesearch(BTreeNode* troot, int finddata)
{
	while(troot!=NULL&&finddata!=troot->data)
	  troot=(finddata<troot->data)? troot->left:troot->right;
	  return troot;
}
void BTree::tnodelete(BTreeNode* troot, int deldata)
{
	BTreeNode *delparentNode, *childNode, *succNode, *succparentNode, *delNode;
	delparentNode=NULL;
	delNode=troot;
	while(delNode!=NULL&&delNode->data !=deldata)
	{
		delparentNode=delNode;
		delNode=(deldata<delNode->data)? delNode->left:delNode->right;
	}
	if(delNode==NULL)
	{
		cout<<"deger yok"<<endl;
	}
	if(delNode->left==NULL)&&(delNode->right==NULL)
	{
		if(delparentNode->left==delNode)
		  delparentNode->left=NULL;
		else
		  delparentNode->right=NULL;
	}
}
else

if(delNode->left==NULL || delNode-> right==NULL)
{
	childNode=(delNode->left!=NULL)?delNode->left:delNode->right;
	if(delparentNode->left==delNode)
       delparentNode->left=childNode;
    else
       delparentNode->right=childNode;
}

else
{
	succNode=delNode->right;
	while(succNode->left !=NULL)
	{
		succparentNode=succNode;
		succNode=succNode->left;
	}
	if(succparentNode->left==succNode)
		succparent->left=succNode->rigth;
	else
		succparent->right=succNode->right;
	delNode->data=succNode->data;
	delNode=succNode;
}
free(delNode);


int main()
{
	Btree TR;
	int sayi[]={15,5,16,12,3,20,18,23,13,10,6,7};
	for(int i=0;i<12;i++)
		TR.btreeaddnode(sayi[i]);
	cout<< " " << endl;
	TR.preorder(TR.Root);
	cout << " "<<endl;
	BTreeNode* maxnodedata=TR.min(TR.Root);;
	cout<<minnodedata->data;
	cout<< " "<<endl;
	BtreeNode* succ=TR.succ(TR.Root);
	cout<<succ->data<<endl;
	BTreeNode* pred=TR.pred(TR.Root);
	cout<<pred->data<<endl;
	BTreeNode* findnode=TR.tnodesearch(TR.Root,18);
	cout<<findnode->data<<endl;
	TR.tnodedelete(TR.Root,5);
	cout<<" "<< endl;
	TR.preorder(TR.Root);
	cout<<" "<<endl;
}






























