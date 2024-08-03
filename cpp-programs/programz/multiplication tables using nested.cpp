#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int num1,num2,mul,i;

	cout<<"	enter first num:";
	cin>>num1;
	cout<<"enter 2nd num:";
	cin>>num2;

	

	for(int i=num1;i<=num2;i++){
		cout<<"multiplication table of"<<i<<endl; 
		for(int j=1;j<=10;j++){
			cout<<i<<"*"<<j<<"="<<(i*j)<<endl;
		}
		cout<<endl;
	}
	return 0;
}
