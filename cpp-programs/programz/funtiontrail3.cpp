#include<iostream>
using namespace std;
void choice(){
	int number;
	cout<<"enter number:"<<endl;
		cin>>number;
	if(number%2 == !0){
		cout<<"its odd number:";
	}else{
		cout<<"its even number:";
	}
	cout<<"*******"<<endl;
}
int main(){
	while(true){
	
	choice();
	
	}
	return 0;
	
}
