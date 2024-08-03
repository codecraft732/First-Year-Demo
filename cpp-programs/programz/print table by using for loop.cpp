#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"enter a number to print multiplication table:";
	cin>> number;
	char i;
	for(i=0;i<=10;i++){
		cout<<number<<"*"<<"="<<number*i<<endl;
		
	}
	return 0;
}
