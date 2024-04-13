#include<iostream>
using namespace std;

template<class T>
void swapvalues(T a,T b){
	T temp=a;
	a=b;
	b=temp;
	cout<<"swapped values are "<<"a :"<<a<<"b :"<<b<<endl;
}
template <class T>
	T showvalue(T value){
		return value;
	}
int main1(){
	int a =10;
	int b =20;
	swapvalues(a,b);
}
