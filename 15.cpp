#include<iostream>
using namespace std;
int main()
{
	int n=17;
	int &p=n;

cout << n << " " << p << endl;
--n;
cout <<n << " "<< p<< endl;
cout << &n << " " << &p << endl;
}
