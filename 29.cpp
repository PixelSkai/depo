#include<iostream>
using namespace std;
int UnOrderLinearSearc(int arr[], int searchval, int count)
{
	int index= -1;
	for(int i=0;i<count;i++)
	if(arr[i]==searchval)
	index=i;
	return index;
}
int main()
{
	int sayi, sonuc;
	int A[8]={10,7,9,1,17,30,5,6};
	cin>>sayi;
	sonuc=UnOrderLinearSearc(A, sayi, sizeof(A)/sizeof(A[0]));
	if(sonuc==-1)
	cout<< "deger bulunamadi" << endl;
	else
	cout<<"degerin bulundugu index:"<< " " << sonuc<<endl;
	
	}

