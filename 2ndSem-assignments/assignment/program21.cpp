#include<iostream>
using namespace std;
void reverse(){
	int n,b,c;
	cout<<"enter value of n:";
	cin>>n;
	b=n/100;
	n=n%100;
	c=n/10;
	n=n%10;


	cout<<"the reverse number "<<n<<c<<b;

	
}
int main(){
	reverse();
	return 0;
}
