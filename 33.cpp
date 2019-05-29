#include<iostream>
void bubblesort(int arr[], int count)
{
	int i, rightmost,tmp;
	for(rightmost=count-1;rightmost>0;rightmost--)
	{
		for(i=0;i<rightmost;i++)
		{
			if(arr[i]>arr[i+1])
			{
				tmp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=tmp;
			}
		}
	}
}
int main()
{
	int A[9]={10,7,9,1,9,17,30,5,6};
    bubblesort(A, sizeof(A)/sizeof(A[0]));
    cout << "--------------"<< endl;
    int size = sizeof(A)/sizeof(A[0]);
    for(i=0;i<size;i++)
    cout << A[i] << "  ";
}
