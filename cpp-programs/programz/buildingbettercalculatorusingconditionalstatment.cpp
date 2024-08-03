#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	char op;
		int result;
	cout<<"enter first num:\n";
	cin>>num1;
	cout<<"enter operator:\n";
	cin>>op;
	cout<<"enter 2nd num:\n";
	cin>>num2;
	cout<<num1<<op<<num2<<"="<<result<<endl;
	
	
	if(op == '+'){
		result=num1+num2;
	}else if(op == '-'){ 
result=num1-num2;
	}else if(op == '*'){
	result=num1*num2;
	}else if(op == '/'){
		result=num1/num2;
	}else{
		cout<<"error! invalid operator";
	}
	cout<<result;
	return 0;
	
}
