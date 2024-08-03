#include<iostream>
using namespace std;
int main(){
	int num1,num2,sum,div,mul,sub;
char op;
	cout<<"enter first num:\n";
	cin>>num1;
	
	cout<<"enter operator:\n";
	cin>>op;
	
	cout<<"enter 2nd num:\n";
	cin>>num2;

	sum=num1+num2;
	sub=num1-num2;
	mul=num1*num2;
	div=num1/num2;
	
	
	cout<<"the sum of num1 and num2 is "<<sum<<endl;
	cout<<"the sub of num1 and num2 is "<<sub<<endl;
	cout<<"the mul of num1 and num2 is "<<mul<<endl;
	cout<<"the div of num1 and num2 is "<<div<<endl;
	
	return 0;


}
