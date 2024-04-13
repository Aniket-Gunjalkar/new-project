#include<iostream>
#include<string.h>
using namespace std;

class employee{
	private:
		int id;
		string name;
		int deptid;
public:
		double sal;
		public:
			employee(){
			
				
			}
			employee(int id,string name,int deptid,double sal){
				this->id=id;
			   this->name=name;
			   this->deptid=deptid;
				this->sal=sal;
				
			}
		//	virtual void calsal()=0;
			//{
//				cout<<"--------employee salary="<<sal<<endl;
//			}
			void display(){
				cout<<"------Display Employeee-------"<<endl;
				cout<<"id=  "<<id<<"name=  "<<name<<"deptid=  "<<deptid<<"sal=  "<<sal<<endl;
			}
};
class mgr: virtual public employee
{
	private:
		int bonus;
		public:
//			mgr(){
//				bonus=1000;
//			}
			mgr(int id,string name,int deptid,double sal,int bonus):employee(id,name,deptid,sal)
			{
				this->bonus=bonus;
				
			}
			void calsal(){
				cout<<"bonus:"<<bonus;
				cout<<"manager total salary="<<" "<<bonus+this->sal<<endl;
				
			}
			void display(){
				employee::display();
		cout<<"manegar bonus= "<<" "<<bonus<<endl;
			}
};
class salesperson:virtual public employee{
                 private:
                 	int ta,fa,pa;
                 	
                 	public:
                 		salesperson(int ta,int fa,int pa){
                 			this->ta=ta;
                 			this->fa=fa;
                 			this->pa=pa;
						 }
						salesperson(int id,string name,int deptid,double sal,int ta,int fa,int pa):employee(id,name,deptid,sal){
                 		this->ta=ta;
                 		this->fa=fa;
                 		this->pa=pa;
						 }
						 void calsal(){
						 	cout<<"salesperson salary=  "<<this->sal+pa+fa+ta<<endl;
						 }
						 void display(){
						 	employee::display();
						 	cout<<"ta="<<ta<<"fa=  "<<fa<<"pa="<<pa<<endl;
						 }
						 
};
class salesManager: public mgr, public salesperson{
	private:
		int incentive;
		public:
//		salesManager()
//			{
//				incentive=134;
//			}
			salesManager(int id,string name,int deptid,double sal,int bonus,int ta,int fa,int pa,int incentive):mgr(id,name,deptid,sal,bonus),salesperson(ta,fa,pa)
			{
				this->incentive=incentive;
				
			}
			void calsal(){
				this->sal=incentive+this->sal;
				cout<<"salesmanager total salary="<<" "<<this->sal<<endl;
				
			}
			void display(){
			mgr::display();
			salesperson::display();
				cout<<"salesmanager incentive= "<<" "<<incentive<<endl;
			}
};
int main()
{
	//employee e1(10,"ram",67,20000);
//	e1.calsal();
	//e1.display();
	
	
//	cout<<"--------------------------\n--------"<<endl;
	//mgr m1(12,"Ajay",50,90000,10000);
//	m1.calsal();
//	m1.display();
	//cout<<"--------------------------\n--------"<<endl;

	//mgr m1(12,"ggg",100,20000,5000);
	
salesManager smg(12,"dsfg",345,20000.00,1000,100,200,300,500);

//salesManager *s1=new salesManager(12,"aaaa",100,40000,200,50,60,98,1000);
//	employee *e1;
//	e1=&smg;
//	s1->calsal();
	//smg.calsal();
//eptr->calsal();

//smg.calsal();
smg.display();
}
