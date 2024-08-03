#include<iostream>
using namespace std;
void swaps(){
	int a,b,t;
	cout<<"enter the value of a :\n";
	cin>>a;
	cout<<"enter the value of b :\n\n";
	cin>>b;
	
	//swaps the value ;
	//a=a+b;
//	b=a-b;
//	a=a-b;
t=a;
a=b;
b=t;

	cout<<"After swapping :\n";
	cout<<"value of a swaps = "<<a<<endl;
	cout<<"value of b swaps = "<<b<<endl;
	
}
int main(){
	swaps();
	return 0;
	
}
