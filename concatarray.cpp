#include<iostream>
using namespace std;
int main(){
	int n1,n2;
	cout<<"enter n1:";
	cin>>n1;
	cout<<"enter n2:";
	cin>>n2;
	int arr1[n1],arr2[n2];
	int arr3[n1+n2];
	for(int i=0;i<n1;i++)
	{
		cin>>arr1[i];
	}
	for(int i=0;i<n2;i++)
	{
		cin>>arr2[i];
	}
	for(int i=0;i<n1;i++)
	{
		arr3[i]=arr1[i];
	}
	for(int i=0;i<n2;i++)
	{
		arr3[i+n1]=arr2[i];
	}
	for(int i=0;i<n2+n1;i++)
	{
		cout<<"arr3["<<i<<"]="<<arr3[i]<<endl;
	}
	
}
