#include<iostream>
using namespace std;
int main(){
	int marks;
	
	string name,result;
	cout<<"enter name:";
	cin>>name;
	cout<<"enter marks:";
	cin>>marks;
	
	cout<<name<<" got "<<marks<<" marks and his grade is "<<result;
	
	if(marks<=90 && 90<=100){
	cout<<"A";
	}else if(marks<=80 && 80<=89){
 cout<<"b";
	}else if(marks<=70 && 70<=79){
	cout<<"C";
	}else if(marks<=60 && 60<=69){
		cout<<"d";
	}else if(marks<=50 && 50<=0){
	cout<<" f";
	}else{
		cout<<"invalid marks write 0 to 100";
	}
	return 0;
}

