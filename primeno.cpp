#include<iostream>
using namespace std;
int main(){
	int n,flag,i,j;
	cout<<"enter the number"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<=n;i++){
		cin>>arr[i];
	}
		flag=0;
	for(int j=2;j<=i;j++){
		if(i%j==0){
			flag++;
		}
	}
	if(flag==1)
	cout<<" "<<arr[i];
	
}
