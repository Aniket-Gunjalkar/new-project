#include<iostream>
#include<string.h>
using namespace std;

class employee{
	private:
		int id;
		string name;
		int deptid;
		protected:
		double sal;
		public:
			employee(){
				id=1;
				name="abc";
			    deptid=10;
				sal=10000;
				
			}
			employee(int id,string name,int deptid,double sal){
				this->id=id;
			   this->name=name;
			   this->deptid=deptid;
				this->sal=sal;
				
			}
			void calsal(){
				cout<<"--------employee salary="<<sal<<endl;
			}
			void display(){
				cout<<"------Display Employeee-------"<<endl;
				cout<<"id=  "<<id<<"name=  "<<name<<"deptid=  "<<deptid<<"sal=  "<<sal<<endl;
			}
};
class mgr:public employee
{
	private:
		int bonus;
		public:
			mgr(){
				bonus=1000;
			}
			mgr(int id,string name,int deptid,double sal,int bonus):employee(id,name,deptid,sal)
			{
				this->bonus=bonus;
				
			}
			void calsal(){
				cout<<"manager total salary="<<" "<<bonus+this->sal<<endl;
				
			}
			void display(){
				employee::display();
				cout<<"manegar bonus= "<<" "<<bonus<<endl;
			}
};
class worker:public employee{
                 protected:
                 	int hrwork;
                 	int hrlyrate;
                 	public:
                 		worker(){
                 			hrwork=2;
                 			hrlyrate=5;
						 }
						 	worker(int id,string name,int deptid,double sal,int hrwork,int hrlyrate):employee(id,name,deptid,sal){
                 			this->hrwork=hrwork;
                 			this->hrlyrate=hrlyrate;
						 }
						 void calsal(){
						 	cout<<"Worker salary=  "<<this->sal+(hrwork*hrlyrate)<<endl;
						 }
						 void display(){
						 	employee::display();
						 	cout<<"hrwork="<<hrwork<<"hrlytrate=  "<<hrlyrate;
						 }
						 int gethrlyrate(){
						 	return hrlyrate;
						 }
						 void sethrlyrate(int hrlyrate){
						 	this->hrlyrate=hrlyrate;
						 }
};

int main()
{
	employee e1(10,"ram",67,20000);
	e1.calsal();
	//e1.display();
//	cout<<"--------------------------\n--------"<<endl;
	mgr m1(12,"Ajay",50,90000,10000);
	m1.calsal();
//	m1.display();
	//cout<<"--------------------------\n--------"<<endl;
	worker w1(13,"Aniket",60,80000,3,500);
	w1.calsal();
//	w1.display();
//	w1.sethrlyrate(1000);
//	w1.calsal();
	//cout<<"get"<<w1.gethrlyrate();
//	w1.display();
	
	
//	employee* iacsd[3];
//	iacsd[0]=&e1;
//	iacsd[1]=&m1;
//	iacsd[2]=&w1;
//	
//	for(int i=0;i<3;i++)
//	{
//	//	iacsd[i]->display();//i=0  1 2 
//		iacsd[i]->calsal();
//			
// 
//	
//		
	}
}
