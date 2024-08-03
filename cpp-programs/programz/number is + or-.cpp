#include<iostream>
using namespace std;
int main(){
	int number;
	char op;
	cout<<"enter number:";
	cin>>number;
	if(number>0)
	cout<<number<<" is positive";
	else if(number<0)
	cout<<number<<" is negitive";
//	else if(number==0)
//	cout<<number <<" is zero";
	else{
		cout<<"number is zero";
	}
	return 0;
}
