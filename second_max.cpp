#include<iostream>
using namespace std;
int main()
{
	int a[10],n,i,res=-1;
	cout<<"enter the number of elements";
	cin>>n;
	cout<<"enter the array elements";
	for(int i=0;i<n;i++)
		cin>>a[i];
	int max=INT_MIN;
	for( i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	for( i=0;i<n-1;i++)
	{
		if(a[i]!=max)
		{
			if(res==-1)
				res=i;
			else if(a[i]>a[res])
				res=i;
			else;
		}
	}
	if(res==-1)
	cout<<-1;
	else
	cout<<"second largest:"<<a[res];	
}
