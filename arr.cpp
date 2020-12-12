#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter total element"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Elements are"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<"Reversing elements"<<endl;
	for(int i = n-1; i >= 0 ; i--)
	{
		cout<<a[i]<<endl;
	}
}
