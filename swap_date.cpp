#include<iostream>
using namespace std;

class date{
	private : int d,m,y;
	
	
	public : 
	date(int d,int m,int y):d(d),m(m),y(y){
		
	}
	void display(){
		cout<<"date  : "<<d<<"-"<<m<<"-"<<y<<endl;
	}
};

template <class T>

void swapobj(T &obj1,T &obj2){
	T temp = obj1;
	obj1 = obj2;
	obj2 = temp;
}
int main2(){
	date d1(1,3,5);
	date d2(7,8,9);
	swapobj(d1,d2);
	d1.display();
	d2.display();
	return 0;
	
}
