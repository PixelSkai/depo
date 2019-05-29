#include<iostream>
using namespace std;
class node
{
	public:
		int item;
		node* link;
};
class Queue
{
	private:
		node *front, *rear;
		public:
			Queue();
			bool isEmpty();
			void enqueue(int);
			int dequeue();
};
Queue::Queue()
{
	front=NULL;
	rear=NULL;
}
void Queue::enqueue(int data)
{
	node *temp=new node();
	temp->item=data;
	temp->link=NULL;
	if(front==NULL)
	{
		front=temp;
	}
	else{
		rear->link=temp;
	}
	rear=temp;
}
int Queue::dequeue()
{
	node *temp=new node();
	int value;
	if(front==NULL)
	{
		cout<<"kuyruk bos";
	}
	else
	{
		temp=front;
		value=temp->item;
		front=front->link;
		delete temp;
	}
	return value;
}
bool Queue::isEmpty()
{
	return(front==NULL);
}
class Graph
{
	private:
		int n;
		int **A;
	public:
		Graph(int size=2);
		bool isConnected(int,int);
		void addEdge(int u, int v);
		void BFS(int);
};
Graph::Graph(int size)
{
	int i,j;
	if(size<2) n=2;
	else n=size;
	A=new int*[n];
	for(i=0;i<n;i++)
	   A[i]=new int[n];
	for(i=0;i<n;++i)
	   for(j=0;j<n;++j) A[i][j]=0;
}
bool Graph::isConnected(int u, int v)
{
	return(A[u-1][v-1]==1);
}
void Graph::addEdge(int u, int v)
{
	A[u-1][u-1]=A[v-1][u-1]=1;
}
void Graph::BFS(int s)
{
	Queue Q;
	bool *explored=new bool[n+1];
	for(int i=1;i<=n;++i)
		explored[i]=false;
	Q.enqueue(s);
	explored[s]=true;
	cout<<"BFS star node:"<<s<<":"<<endl;
	while(!Q.isEmpty())
	{
		int v=Q.dequeue();
		cout<<v<<" ";
		for(int w=1;w<=n;++w)
			if(isConnected(v,w)&&!explored[w])
			{
				Q.enqueue(w);
				explored[w]=true;
			}
	}
	cout<< endl;
	delete[]explored;
}
int main()
{
	Graph g(12);
	g.addEdge(1,2);
	g.addEdge(1,3);
	g.addEdge(2,4);
	g.addEdge(3,4);
	g.addEdge(3,6);
	g.addEdge(4,7);
	g.addEdge(5,6);
	g.addEdge(5,7);
	g.BFS(1);
	return 0;
}
