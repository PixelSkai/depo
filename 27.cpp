#include<iostream>
using namespace std;
class cNode
{
	public:
		int item;
		cNode* link;
		cNode(){item=0; link=NULL;}
};
class circularLinkedList
{
	public:
		void addnode(int);
		void circularprint();
		circularLinkedList(){CLHead=NULL;}
		private:
			cNode* CLHead;
};
void circularLinkedList::addnode(int additem)
{
	cNode* newNode=new cNode;
	newNode->item=additem;
	if(CLHead==NULL)
	  CLHead=newNode;
	else
	{
		cNode* tmpNode=CLHead;
		while(tmpNode->link!=CLHead)
		 tmpNode=tmpNode->link;
		tmpNode->link=newNode;
	}
	newNode->link=CLHead;
}
void circularLinkedList::circularprint()
{
	cNode* tmpNode=CLHead;
	while(tmpNode->link !=CLHead)
	{
		cout << tmpNode->item;
		tmpNode=tmpNode->link;
	}
}
int main()
{
int sayi;
circularLinkedList cLL;
for(int i=0;i<10;i++)
{
	cin>>sayi;
	cLL.addnode(sayi);
	}	
	cLL.circularprint();
}
