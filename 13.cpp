#include<iostream>
using namespace std;
double p(int x, int a, int b=0, int c=0)
{
	return a+(b*x)/2 + (c*x*x)/3;
}
int main()
{
	int x=10;
	cout << p(x,8) << endl;
	cout << p(x,x,7) << endl;
	cout << p(x,8,7,4) << endl;
}
