#include<iostream>
using namespace std;
class base1
{ protected:
	int x,y;
	public:
		base1()
		{
			cout<<"in base class default constr."<<endl;	
		}
		base1(int x,int y)
		{
			this->x=x;
			this->y=y;
			cout<<"in base class constr."<<endl;
			
		}
		virtual void display()
		{
			cout<<"x:"<<x<<"y:"<<y<<endl;
		}
	
};

class deriv1:virtual public base1
{
  public:
  deriv1(int x,int y):base1(x,y)	
  {
  		cout<<"in deriv1 constr."<<endl;
  }
	void display()
	{
		
		cout<<"in derv1"<<endl;
	}
	
};

class deriv2:virtual public base1
{
	
	public:
  deriv2(int x,int y):base1(x,y)	
  {
  		cout<<"in deriv2 constr."<<endl;
  }
	void display()
	{
		
		cout<<"in derv2 display"<<endl;
	}
	
};

class deriv3:public deriv1,public deriv2
{
public:
deriv3(int x,int y)	:deriv1(x,y),deriv2(x,y)
{
	cout<<"in deriv3 constr."<<endl;
	
}
	void display()
	{
		cout<<x<<" "<<y;
		cout<<"in derv3 display"<<endl;
	}
	
};

int main()
{ base1 *b1;
	deriv3 d1(10,20);
	
	b1=&d1;
	b1->display();
	//d1.display();
	
}
