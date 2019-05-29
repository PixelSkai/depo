#include<iostream>
using namespace std;
void rec()
{
	char ch;
	cin.get(ch);
	if(ch!='\n')
	{
			rec();
			cout<<ch;
	}
}
int main()
{
	rec();
}
