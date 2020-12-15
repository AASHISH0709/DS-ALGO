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
	int max,min;
	if(a[0]>a[1])
	{
		max=a[0];
		min=a[1];
	}
	else
	{
		max=a[1];
		min=a[0];
	}
	for(int i = 0; i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		else if(a[i]<min)
		{
			min=a[i];
		}
	}
	cout<<max<<endl<<min<<endl;
}
