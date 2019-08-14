#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter the number";
	cin>>num;
	int mid,ans,end=num-1,beg=0;
	
	
		
		
		while(beg<=end)
		{
			mid=(beg+end)/2;
			if(num==(mid*mid)) 
			{   
				ans=mid;
				break;
			}		
			else if(num>(mid*mid))
			{
				beg=mid+1;
				ans=mid;
			
			}
			else
			{
            	              end=mid-1;
			}
			\
		}
		
		cout<<ans<<endl;
		
	return 0;
}
