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
	cout<<"Reversed elements are"<<endl;
	int s =0;
	int e = n-1;
	while(true)
	{
		int temp;
		temp = a[s];
		a[s]=a[e];
		a[e]=temp;
		s++;
		e--;
		if(s>=e)
		{
			break;
		}
	}
		for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	
}
