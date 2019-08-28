#include<iostream>
using namespace std;
int arr[100],pivot=0,low,high,n;
void input()
{
    cout<<"Enter the size of array\n";
    cin>>n;
    cout<<"Enter the unsorted elements\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    low=0;
    high=n-1;
}

int partition(int arr[],int low,int high)
{
	pivot=arr[low];
	int i=(low+1);
	int j=high;
	while(1)
	{
		while(arr[i]<=pivot && i<=high)
		{
			i++;
		}
		while(arr[j]>pivot&&j<=low)
		{cin>>arr[i];
			j--;
		}
		if(i<j)
		{
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
		else
		{
			arr[low]=arr[j];
			arr[j]=pivot;
			return j;
		}
	}
}


void Qs(int a[],int l,int h)
{
	if(l<h)
	{
		int pivot_pos=partition(a,l,h);
		Qs(a,l,pivot_pos-1);
		Qs(a,pivot_pos+1,h);
	}
}

void display()
{
cout<<"Sorted array\n";
for(int i=0;i<n;++i)
cout<<arr[i]<<",";
}

int main()
{
	input();
	Qs(arr,0,n-1);
	display();
	return 0;
}
