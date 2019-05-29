#include<iostream>
using namespace std;
int top(int a, int b);
int main()
{
	int t=top(2,7);
	cout << "toplam:" << t << endl;
}
int top(int a, int b)
{
	int c=a+b;
	return c;
}
