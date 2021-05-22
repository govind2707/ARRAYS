#include<bits/stdc++.h>
using namespace std;
int  main()
{
	int SIZE;
	cout<<"enter the number of customers";
	cin>>SIZE;
	int a[SIZE],n;
	cout<<"enter IDS:"<<endl;
	for(int i=0;i<SIZE;i++)
		cin>>a[i];
	for(int i=0;i<SIZE;i++)
	{
		n=1;
		if(a[i]==0)
		continue;
		for(int j=i+1;j<SIZE;j++)
		{
			if(a[i]==a[j])
			{
				n=n+1;
				a[j]=0;
			}
		}
		cout<<"customer"<<a[i]<<"visted :"<<n<<"times"<<endl;
		cout<<endl;
	}
}



