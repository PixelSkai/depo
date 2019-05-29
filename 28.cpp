#include<iostream>
using namespace std;
class cNode
{
	public:
		int item;
		cNode* link;
		cNode(){item=0; link=NULL;}
};
class circularQueue
{
	public:
		void addnode();
		void cenqueue(int);
		int cenqueue();
		circularQueue(){cFront=NULL;cRear=NULL;}
		private:
			cNode* cFront;
			cNode* cRear;
};
void circularQueue::addnode()
{
	cNode* newNode=new cNode;
	if(cFront==NULL)
	{
	cFront=newNode; cRear=newNode;
    }
	else
	{
		cNode* tmpNode=cFront;
		while(tmpNode-> link!=cFront)
		tmpNode=tmpNode->link;
		tmpNode->link=newNode;
	}
	newNode->link=cFront;
}
void circularQueue::cenqueue(int qitem)
{
	if(cRear->link!=cFront)
	{
		cRear->item=qitem;
		cRear=cRear->link;
	}
	else
	
	  cout << "kuyruk dolu";
}

int circularQueue::cenqueue()
{
if(cFront!=cRear)
{
	int ditem=cFront->item;
	cFront=cFront->link;
	return ditem;
}
else
cout << "kuyruk bos";
}
int main()
{
int sayi;
circularQueue CQUE;
// 10 node'lu bir kuyruk oluþturdum
for(int i=0;i<10;i++)
{
	CQUE.addnode();
}
//kuyruða veri atadým.
CQUE.cenqueue(500);
for(int i=0;i<5;i++)
{
	cin >> sayi;
	CQUE.cenqueue(sayi);
}
//kuyruktan veri aldým
sayi=CQUE.cenqueue();
cout<<sayi;
}
