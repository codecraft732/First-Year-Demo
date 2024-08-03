#include<iostream>
using namespace std;
int getmax(int num1,int num2,int num3){
	if(num1>=num2 && num1>=num3){
		cout<<num1;
	}else if(num2>=num1 && num2>=num3){
		cout<<num2;
	}else{
		cout<<num3;
	}
	return 0;
}
int main(){
	getmax(3,4,2);
	return 0;
}
