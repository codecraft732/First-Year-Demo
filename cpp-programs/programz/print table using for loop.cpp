#include<iostream>
using namespace std;
int main(){
	int number;
	cout<<""
	cout<<"enter a number:";
	cin>>number;
	cout<<"multiplication table of"<<number<<":";
	for(int i=1;i<=10;i++){
	
		cout<<number<<"*"<<i<<"="<<number*i<<endl;
		
	}
	return 0;
}
