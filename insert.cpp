#include<iostream>
using namespace std;
int  main()
{
	int size,n,i,ele,pos,j;
	cout<<"enter size of array";
	cin>>size;
	int a[size];
	cout<<"enter no of elements";
	cin>>n;
	cout<<" enter elements";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter position to insert";
	cin>>pos;
	cout<<"enter element to insert";
	cin>>ele;
	for(i;i>=pos;i--)
		a[i]=a[i-1];
	a[pos-1]=ele;
	cout<<"array after inserting ";
	for(int i=0;i<n+1;i++)
		cout<<a[i]<< " ";	
	
	
}
