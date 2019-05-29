#include<iostream>
using namespace std;
int binarySearch(int arr[], int searchval, int count)
{
	int lower=0;
	int upper=count -1;
	int middle=(lower+upper)/2;
	while(arr[middle]!=searchval&&lower<upper)
	{
		if(searchval<arr[middle])
		   upper=middle-1;
	    else
		   lower=middle+1;
	    middle=(lower+upper)/2;
	}
	if(arr[middle]!=searchval)
	return -1;
	else
	return middle;
}
int main()
{
	int sayi,sonuc;
	int A[8]={1,5,6,7,9,10,17,30};
	cin>>sayi;
	sonuc=binarySearch(A,sayi,sizeof(A)/sizeof(A[0]));
	if(sonuc==-1)
	cout << "deger bulunamadi" <<endl;
	else 
	cout <<"degerin bulundugu index :"<< " " << sonuc<< endl;
}
