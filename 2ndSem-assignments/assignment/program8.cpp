#include<iostream>
using namespace std;
float si(){
float principleamount,rate,time,simpleinterest;
	cout<<"enter principleamount:\n";
	cin>>principleamount;
	
	cout<<"enter rate:\n";
	cin>>rate;
	
	cout<<"enter time:\n";
	cin>>time;
	
	simpleinterest=(principleamount*rate*time)/100;
	cout<<"simpleinterest is "<<simpleinterest<<endl;

	time=(simpleinterest*100)/(principleamount*rate);
	cout<<"number of years time is "<<time<<endl;
	return time;
}
int main(){
	si();
	return 0;
}
