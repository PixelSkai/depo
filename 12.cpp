#include<iostream>
using namespace std;
void inc(int& a, int& b)
{
	a++;
	b++;
}
int main()
{
	int x=2, y=9;
	cout << x << " " << y << endl;
	inc(x,y);
	cout << x << " " << y << endl;
}
