#include<iostream>
using namespace std;
void ss(int arr[],int k,int n)
{ 
	int temp,min;
	for(int i=0;i<k-1;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
				min=j;
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	cout<<arr[k-1];
}

int main()
{
	int n,k,arr[100];
	cout<<"Enter how many elements in array?\n";
	cin>>n;
	cout<<"enter the array elements\n";
	for(int i=0;i<n;++i)
		cin>>arr[i];
    cout<<"enter the k value\n";
	cin>>k;
	ss(arr,k,n);
	return 0;
	
}