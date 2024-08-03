#include<iostream>
using namespace std;
int main(){
	int num1,num2,num3;
	cout<<"Enter first number:";
	cin>>num1;
	//cout<<"Enter second number:";
    //cin>>num2;
	cout<<"Enter third number:";
	cin>>num3;
	for(int i=num1;i<=num3;i++ ){
		cout<<num1<<"*"<<i<<"="<<num1*i<<endl;
	}
	return 0;
}
