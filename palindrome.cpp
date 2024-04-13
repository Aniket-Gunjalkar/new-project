#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter the number:";
	cin>>num;
	int a;
	int sum=0;
	int c=num;
	while(num>0)
	{
		a=num%10;
		sum=(sum*10)+a;
		num=num/10;
	}
	if(c==sum)
	{
		cout<<c<<" is palindrome";
	}
	else
	{
		cout<<c<<" is not palindrome";
	}
}
