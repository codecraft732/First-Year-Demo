#include<iostream>
using namespace std;
int product(int num){
	int product=1;
	while(num!=0){
		product*=num%10;
		num/=10;
	}
	return product;
}
int main(){
	int num;
	cout<<"enter 5 digit number:";
	cin>>num;
	cout<<"product of its digit "<<product(num);
	return 0;
}
