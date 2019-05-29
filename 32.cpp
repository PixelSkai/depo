#include<iostream>
using namespace std;
void selectsort(int arr[], int count)
{
	int i, rightmost,tmp,max_index;
	for(rightmost=count-1;rightmost>0;rightmost--)
	{
		max_index=0;
		for(i=1;i<=rightmost;i++)
		if(arr[i]>arr[max_index])
		max_index=i;
		tmp=arr[max_index];
		arr[max_index]=arr[rightmost];
		arr[rightmost]=tmp;
	}
}
int main()
{
	int i;
	int A[9]={10,7,9,1,9,17,30,5,6};
	selectsort(A, sizeof(A)/sizeof(A[0]));
	cout << "-----------" << endl;
	int size=sizeof(A)/sizeof(A[0]);
	for(i=0; i<size;i++)
	cout << A[i] << " ";
}
