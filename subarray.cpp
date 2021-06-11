#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum2,sum=0;
	cout<<"enter number of elemmnts";
	cin>>n;
	cout<<"enter sum";
	cin>>sum2;
	int a[n];
	cout<<"enter elements";
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			sum=0;
			for(int k=i;k<=j;k++)
			{
				cout<<a[k];
				sum=sum+a[k];
			}
			if(sum==sum2)
				cout<<"exists";
			
			cout<<endl;
		}
		
	}
}
