#include<bits\stdc++.h>
using namespace std;
int main()
{
	int n,del,ind,f=0;
	cout<<"enter no of elements";
	cin>>n;
	int a[n];
	cout<<"enter array elements";
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<"enter number to del";
	cin>>del;
	for(int i=0;i<n;i++)
	{
		if(a[i]==del)
		{
			ind=i;
			f=1;
			break;
		}
	}
	if(f==1)
	{
		cout<<"array after deleting"<<" 	";
		for(int i=ind;i<n;i++)
		{
			a[i]=a[i+1];
		}
		for(int i=0;i<n-1;i++)
		cout<<a[i]<<" ";
	}
	else
	cout<<"no such ele";	
}
