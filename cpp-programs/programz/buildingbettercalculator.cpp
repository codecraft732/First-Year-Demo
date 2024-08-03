#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	char op;
	cout<<"enter num1\n:";
	cin>>num1;
	cout<<"enter op\n:";
	cin>>op;
	cout<<"enter num2\n:";
	cin>>num2;
	 int result;
	 switch(op){
	 
	 case'+':
	 result=num1+num2;
	 break;
	 case'-':
	result=num1-num2;
	 break;
	 case'*':
	result=num1*num2;
	 break;
	 case'/':
	 	if(num2 !=0){
		 
    result=num1/num2;}else{
    	cout<<"error! dividing by zero is undefined";
	}
	 break;
}
	 cout<<num1<<op<<num2<<"="<<result<<endl;
	 return 0;
	 
	 
	 
}
