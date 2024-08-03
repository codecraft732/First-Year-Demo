#include<iostream>
using namespace std;
void reverse(){
	int n ,a,b,c,d;
	cout<<"enter the five digit number of n:";
	cin>>n;
	
	a=n/10000;
	n=n%10000;
	b=n/1000;
	n=n%1000;
	c=n/100;
	n=n%100;
	d=n/10;
	n=n%10;
	cout<<"the reverse number is "<<n<<d<<c<<b<<a;
}
int main(){
	reverse();
	return 0;
}
