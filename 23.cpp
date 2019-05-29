#include<iostream>
using namespace std;
class Node
{
	public:
		int item;
		Node* link;
		Node(){item=0; link=NULL;}
};
class stack
{
	public:
		void push(int);
		int pop();
		stack(){stop=NULL;}
		private:
		Node* stop;
		
};
void stack::push(int sitem)
{
	Node* newNode=newNode;
	newNode ->item=sitem;
	newNode ->link=stop;
	stop=newNode;
}
int stack::pop()
{
	if(stop!=NULL)
	{
		Node* delNode=stop;
		stop=delNode->link;
		int popitem=delNode->item;
		delete(delNode);
		return popitem;
	}
}
int main()
{
	int sayi;
	stack STC;
	for(int i=0;i<20;i++)
	{
		cin>>sayi;
		STC.push(sayi);
	}
	cout << STC.pop();
	int sayilar=STC.pop();
	cout << sayilar;
	cout << endl;
	sayilar=STC.pop();
	cout << sayilar << endl;
	sayilar=STC.pop();
	cout << sayilar << endl;
	return 0;
}
