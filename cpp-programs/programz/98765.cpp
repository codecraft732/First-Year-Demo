#include<iostream>
using namespace std;
int main(){
	int discount,discountamount,perchaseamount;
	cout<<"enter perchaseamount :";
	cin>>perchaseamount;
	if(perchaseamount>=1000){
		discount=perchaseamount*0.10;
		cout<<"discountamount:"<<discount;
	}else{
		cout<<"no discount is apply";
	}
	return 0;
}
