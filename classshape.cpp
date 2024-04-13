#include<iostream>
#include<string>
using namespace std;
class shape
{
	private:
		string name;
		public:
		shape()
		{
			this->name="qwer";
		}
		shape(string name)
		{
			this->name=name;
		}
		virtual void area()
		{
		}
		virtual void display()
		{
			cout<<"shape name:"<<name<<endl;
		}
};
class square : public shape
{
	private:
		int s;
		float a;
		public:
		square()
		{
			int s=12;
		}
		square(string name,int s):shape(name)
		{
			this->s=s;
		}
		void area()
		{
			a=s*s;
		}
		void display()
		{
			shape::display();
			cout<<"area of square:"<<a<<endl;
		}
};
int main()
{
	shape *s1;
	square sq("square",10);
	s1=&sq;
	s1->area();
	s1->display();
}
