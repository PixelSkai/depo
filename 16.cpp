#include<iostream>
using namespace std;
void swp(int *x, int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
int main()
{
	int a=18, b=27;
	cout<< "a:" << a << " " << "b:" << b << endl;
	swp(&a, &b);
	cout << "a:" << a << " " << "b:" << b << endl;
}
