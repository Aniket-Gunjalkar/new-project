#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
class book{
	private:
		int id;
		char name[20];
		char author[30];
	public:
		void accept(int id,const char* name,const char* author){
			this->id=id;
			strcpy(this->name,name);
		    strcpy(this->author,author);
			cout<<"======Book created==="<<endl;
		}
		void display()
        {
        	cout<<"id="<<id<<endl;
        	cout<<"name"<<name<<endl;	
			cout<<"author="<<author<<endl;
	
		}		
};
void writebook(char* fileName,book &b1)
{
	ofstream obj;
	obj.open(fileName ,ios::binary|ios::app);
	//cout<<sizeof(book);                             
	obj.write((char*)&b1,sizeof(book));
	obj.close();
	cout<<"book get stored in the file "<<endl;
}
void readBook(char* fileName){
	book b2;
	ifstream input(fileName,ios::binary|ios::app);
	input.read((char*)&b2,sizeof(book));
	b2.display();
}

int main()
{
     int ch;
     int bookid;
     char na[20];
     char au[30];
     char fileName[20];
     book b1;
     cout<<"1.Book add,  2.display boook,  3. write book intro,  4.read book,  5.exit"<<endl;
     do{
     	cout<<"enter the choice=="<<endl;
     	cin>>ch;
     	switch(ch){
     		case 1:cout<<"book id, name ,author"<<endl;
     		cin>>bookid>>na>>au;
     		b1.accept(12,"java","Abc");
			 break;
     		case 2:
			 b1.display();
			 break;
    		case 3:cout<<"enter file name"<<endl;
 			cin>>fileName;
  			writebook(fileName,b1);
			break;
  		case 4:
		  cout<<"enter file name"<<endl;
 			cin>>fileName;
 			readBook(fileName);
 			
			 break;
//     		case 1:break;
		 }
	 }while(ch!=0);
}
