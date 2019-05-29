#include<iostream>
using namespace std;
class node
{
	public:
		int item;
		node* link;
};
class stack 
{
	private:
		node* top;
		public:
			stack();
			void push(int);
			int pop();
			bool isEmpty();
};
stack::stack()
{
	top=NULL;
}
void stack::push(int data)
{
	node *p;
	p=new node;
	p->item=data;
	p->link=NULL;
	if(top!=NULL)
	{
		p->link=top;
	}
	top=p;
}
int stack::pop()
{
	node* temp;
	int value;
	if(top==NULL)
	{
		cout<< "stack bos lan!"<<endl;
	}
	else{
		temp=top;
		top=top->link;
		value=temp->item;
		delete temp;
	}
	return value;
}
class Graph
{
	private:
		int n;
		int **A;
		public:
			Graph(int size=2);
			bool isConnected(int, int);
			void addEdge(int x, int y);
			void DFS(int, int);
			};
Graph::Graph(int size)
{
	int i,j;
	if(size<2)
	 n=2;
	  else
	   n=size;
  A=new
  int*[n];
  for(i=0;i<n;++i)
    A[i]=new int[n];
  for(i=0;i<n;++i)
    for(j=0;j<n;++j) A[i][j]=0;
}
bool Graph::isConnected(int x,int y)
{
	return(A[x-1][y-1]==1);
}
void Graph::addEdge(int x, int y)
{
	A[x-1][y-1]=A[y-1][x-1]=1;
}
void Graph::DFS(int x, int req)
{
	Stack S;
	bool *visited=new bool[n+1];
	int i;
	for(i=0;i<=n;i++) visited[i]=false;
	S.push(x);
	visited[x]=true;
	cout<<"DFS start node:"<<x<<":"<<;
	while(!S.isEmpty())
	{
		int k=S.pop();
		if(k==qeq) break;
		vout<<k<<" ";
		for(i=n;i>=0;--i)
		 if(isConnected(k,i)&&!visited[i])
		 {
		 	S.push(i);
		 	visited[i]=true;
		 }
	}
	cout<<endl;
	delete []visited;
}
int main()
{
	Graph g(8);
	g.addEdge(1,2);
	g.addEdge(1,3);
	g.addEdge(1,4);
	g.addEdge(2,5);
	g.addEdge(2,6);
	g.addEdge(4,7);
	g.addEdge(4,8);
	g.DFS(1,4);
	return 0;
}

































