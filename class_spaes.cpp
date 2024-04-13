//Shape Hierarchy:
//Problem Statement: Design a hierarchy of shape classes. Begin with a base 
//class Shape and then create derived classes like Circle, Rectangle, and Triangle.
//Each shape should have methods for calculating area and perimeter specific to its geometry.
#include<iostream>
using namespace std;
//base class
class shapes{
	public : string name;
			  int sides ;
			  shapes(string name,int sides){
				this->name=name;
			  	this->sides=sides;
			  	
			  }
};
//derived class
class triangle : public shapes{
	private:
		int base;
		int height;
		
		public:
			
			triangle(int base,int height,string name,int sides) : shapes(name,sides)
			{
				cout<<"parameter constructor of triangle";
				this->base=base;
				this->height=height;
				
			}
			
			void displayarea(){
				cout << "area of triangle is ";
				cout << 0.5*base*height;
				
			}
			
			void display_details(){
				cout<<"name of the shape "<<name<<endl;
				cout<<"no. of sides is: " <<sides<<endl;
				cout<<"base is: "<<base<<endl;
				cout<<"height is :"<<height<<endl;
				displayarea();
			}
};

class rectangle:public shapes{
	int length;
	int breadth;
	
	public:
		
		rectangle(string name,int sides,int length,int breadth):shapes(name,sides){
			this->name=name;
			this->sides=sides;
			this->length=length;
			this->breadth=breadth;
		}
			void displayrectarea(){
				cout << "area of rectangle is ";
				cout << length*breadth;
				
			}
			
			void display_details(){
				cout<<"name of the shape "<<name<<endl;
				cout<<"no. of sides is: " <<sides<<endl;
				cout<<"length is: "<<length<<endl;
				cout<<"breadth is :"<<breadth<<endl;
				displayrectarea();
			}
			
		
	
};



int main(){
	triangle t(8,9,"triangle",3);
	t.display_details();
	cout<<endl;
	
	rectangle r("rectangle",4,4,9);
	r.displayrectarea();
}

