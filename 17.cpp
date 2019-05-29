#include<iostream>
using namespace std;
int *p, top, s;
int i,n;
int main()
{

	while(true)
	{
		cout << "hafizadan ne kadar yer istiyon:";
		cin >> n;
		p=new int[n];
		s=0;
		for(i=0;i<n;i++)
		{
			cin >>p[i];
			s=p[i];
		}
		top=s/n;
		cout << "toplam:" << top << endl;
		delete[]p;
	}

}
