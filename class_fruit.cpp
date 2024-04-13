#include<iostream>
using namespace std;
namespace fruitbasket{
	class fruit{
		private : string name;
		string color;
		double price;
		public:
			virtual void taste()=0;
			void show(){
				cout<<"name of fruit : "<<name<<"color of fruit :"<<color<<"price of fruit :"<<price<<endl;
				
			}
	};
	class apple :public fruit{
		public :
			apple(){
				cout<<"default of apple"<<endl;
				
				
			}
			void taste(){
				cout<<"apple is sweet"<<endl;
				
			}
			void juice(){
				cout<<"apple juice is good "<<endl;
			}
	};
		class mango :public fruit{
		public :
			mango(){
				cout<<"default of mango"<<endl;
				
				
			}
			void taste(){
				cout<<"apple is double sweet"<<endl;
				
			}
			void pulp(){
				cout<<" aamras  is good "<<endl;
			}
	};
		class orange :public fruit{
		public :
			orange(){
				cout<<"default of orange"<<endl;
				
				
			}
			void taste(){
				cout<<"orange is sour"<<endl;
				
			}
			void juice(){
				cout<<"orange juice is not good "<<endl;
			}
	};
}
	int main(){
		cout<<"1.add apple 2.add mango 3.add orange 4.showall"<endl;
		int ch,index=0;
		string name,color;
		double price;
		fruitbasket::fruit* shop[4];
		typedef fruitbasket:mango mango;
		typedef fruitbasket:apple apple;
		typedef fruitbasket:orange orange;
		do{
			cout<<"enter choice";
			cin>>ch;
			switch(ch){
				case 1:
					if (index<5){
						cout<<"enter name color price :"<<endl;
						cin>>name>>color>>price>>
					}
			}
		}
	}


