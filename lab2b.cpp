#include<iostream>
using namespace std;
void bs(int arr[],int k,int n)
{ 
 int temp;
 for(int i=0;i<k;++i)
 {
	 for(int j=0;j<n-1-i;j++)
		 if(arr[j+1]<arr[j])
		 {
			 temp=arr[j+1];
			 arr[j+1]=arr[j];
			 arr[j]=temp;
		 }

 }
 for(int x=n-1;x>=n-k;x--)
	 cout<<arr[x]<<" ";

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
	bs(arr,k,n);
	return 0;
	
}
