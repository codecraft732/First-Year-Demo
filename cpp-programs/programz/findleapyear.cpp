#include<iostream>
using namespace std;
int main(){
	int year;
	cout<<"enter year:";
	cin>>year;
	
	if(year%400==0 || year%100!=0 && year%4==0)
	cout<<"it's leap year";
	else
	cout<<"it's not leap year";
	
	return 0;
}
