#include<iostream>
using namespace std;

class student{
	private : 
				string name;
				int r,m1,m2,m3;
			public:	student(){
					cout<<"student default constr "<<endl;
					}
			 student(string name,int r,int m1,int m2,int m3)
			{
				this->name=name;
				this->r=r;
				this->m1=m1;
				this->m2=m2;
				this->m3=m3;
			}
			void showresult(){
				cout<<"name of student  :"<<name<<endl;
				cout<<"Roll no is  :"<<r<<endl;
				cout<<"marks are m1 :"<<m1<<endl;
				cout<<"marks are m2 :"<<m2<<endl;
				cout<<"marks are m3 :"<<m3<<endl;
			}
			friend void Settingmarks(student &obj);
};
	
	
		void Settingmarks(student &obj){
//			obj.r=123;
//			obj.name="aniket";
			
			obj.m1=91;
			obj.m2=99;
			obj.m3=87;
			cout<<"setiing by friend\n"<<endl;
			obj.showresult();
			
		}
		int main(){
		

			student obj1("aniket",123,56,59,69);
			obj1.showresult();
		Settingmarks(obj1);
			
			student obj2("omkar",170,69,79,69);		
			Settingmarks(obj2);
			return 0;
		}
