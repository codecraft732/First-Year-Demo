#include<iostream>
using namespace std;
void qr(){
	int dividend,divisor,remainder,quotient;
	cout<<"enter the value of dividend :";
	cin>>dividend;
	cout<<"enter the value of divisor:";
	cin>>divisor;

	quotient= dividend/divisor;
	remainder = dividend % divisor;
	
	cout<<"the quotient is "<<quotient<<endl;
	cout<<"the remainder is "<<remainder<<endl;
	
}
int main(){
	qr();
	return 0;
}
