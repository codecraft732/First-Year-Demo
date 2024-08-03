#include<iostream>
using namespace std;

int main()
{
	int num1,num2;
	char op;
	

	cout<<"enter first num1:";
	cin>>num1;
	
	cout<<"enter operator:";
	cin>>op;

	cout<<"enter first num2:";
	cin>>num2;
	
	int result;
	
	if(op=='+'){
		result =num1+num2;
	}else if(op=='-'){
		result=num1-num2;
    }else if(op=='*'){
	   result=	num1*num2;
    }else if(op=='/'){
	  result=	num1/num2;
    }else{
    	cout<<"invalid op";
	}
	cout<<result;
	
	return 0;
	
}

