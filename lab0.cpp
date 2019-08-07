#include<iostream>
using namespace std;

class maxm
{
	int m,n,i,arr[100];
	public:
		void max()
		{
			m=arr[0];
			for(i=0;i<n;++i)
			{
				if(arr[i]>=m)
					m=arr[i];
			}
		cout<<"max no. is  "<<m;
		}
	maxm()
	{
		cout<<"Constructor\n";
		
	}
	void getdata()
	{
		cout<<"How many nos.?\n";
		cin>>n;
		cout<<"Enter the nos.\n";
		for(i=0;i<n;++i)
		cin>>arr[i];
	}
};

int main()
{
	maxm m1;
	m1.getdata();
	m1.max();
	return 0;
}