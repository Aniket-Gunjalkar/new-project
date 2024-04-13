#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter the number:";
	cin>>num;
	bool flg=false;
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			flg=false;
			break;
		}
		else
		{
			flg=true;
		}
	}
	if(flg)
	{
		cout<<num<<"is prime";
	}
	else
	{
		cout<<num<<" is not prime";
	}
}
