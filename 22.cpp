#include<iostream>
class node
{
	public:
		int item;
		node *link;
		node(){item=1;link=NULL;}
};
class linkedlist
{
	public:
		void addnode(int);
		void linkedprint();
		private:
			node* ListHead;
			node* ListTail;
};
void linkedlist::addnode(int additem)
{
	node* newnode= new node;
	newnode->item=additem;
	newnode->link=NULL;
	if(ListHead==NULL)
	{
		ListHead=newNode;
		ListTail=newNode;
	}
	else
	{
		ListTail->link=newNode;
		ListTail->newNode;
	}
}
void linkedlist::linkedprint()
{
	node* tmpnode=listhead;
	while(tmpnode !=null)
	{
		cout << tmpnode -> item;
		tmpnode=tmpnode ->link;
	}
}
int main()
{
	int sayi;
	linkedlist LL;
	for(int i=0;i<10;i++)
	{
		cin>>sayi;
		LL.addnode(sayi);
	}
	LL.linkedprint();
}
