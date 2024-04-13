#include<iostream>
#include<string.h>
using namespace std;
namespace fruitbasket{
	class Fruit{
		private : string name,color;
				  double weight;
		public : 
		virtual void taste()=0;
		 void show()
		{
			cout<<"name of fruit "<<name<<"color of fruit "<<color<<"weight of fruit "<<weight<<endl;
			
		}
	};
	class Apple:public Fruit{
		Apple(){
			cout<<"apple default"<<endl;
			
		}
		Apple(string name,string color,double weight):Fruit(name,color,weight){
				this->name=name;
				this->color=color;
				this->weight=weight;
						
		}
		public:
			void taste(){
				cout<<"apple is sweet "<<endl;
			}
			
	};
	class Mango:public Fruit{
		Mango(){
			cout<<"mango default"<<endl;
		}
		Mango(string name,string color,double weight):Fruit(name,color,weight){
				this->name=name;
				this->color=color;
				this->weight=weight;
		}
		public:
			void taste(){
				cout<<"mango is double sweet "<<endl;
			}
			
	
	};
		class Orange:public Fruit{
		Orange(){
			cout<<"orange default"<<endl;
		}
		Orange(string name,string color,double weight):Fruit(name,color,weight){
				this->name=name;
				this->color=color;
				this->weight=weight;
		}
		public:
			void taste(){
				cout<<"orange is sour "<<endl;
			}
			
	
	};
	
}
