#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter the prime no betn 2 to n:";
	cin>>num;
	bool flg=false;
	for(int n=1;n<num;n++)
	{
		flg=false;
		for(int i=2;i<n;i++)
		{
			if(n%i==0)
			{
				flg=false;
				break;
			}
			else
			{
				flg=true;
			}
		}
		if(flg || n==2)
		{
			cout<<n<<endl;
		}
		
	}
	
}
