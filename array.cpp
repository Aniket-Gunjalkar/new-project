#include<iostream>
using namespace std;
int main()
{
	int n,cnt=0;
	cout<<"enter the size:";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];	
	}
	int num;
	cout<<"enter the no to search:";
	cin>>num;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==num)
		{
			cnt++;	
		}
	}
	if(cnt>0)
	{
		cout<<num<<" is present "<<cnt<<" times";
	}
	else
	{
		cout<<num<<" is not present";	
	}
	
	
	
}
