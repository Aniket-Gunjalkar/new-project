#include<iostream>
#include<vector>
using namespace std;	
vector<int> vect;
int main(){
	int ch,n;
	
	cout<<"1. show vector  2. add element  3.vector count  4. at index  5.sort  6.reverse"<<endl;
	
	do{
		
		cout<<"enter choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"show vector";
				for(int i=0;i<vect.size();i++){
					cout<<vect[i]<<endl;
				}
				break;
				
			case 2:
				cout<<"enter number"<<endl;
				cin>>n;
				vect.push_back(n);
				break;
			case 3:
				cout<<"count "<<vect.size();
			case 4:
				cout<<"pop"<<endl;
			
			case 5:
			case 6:
		} while(ch!=6);
	}

