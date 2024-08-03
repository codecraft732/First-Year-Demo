#include<iostream>
#include<string.h>
using namespace std; 
void display(){
	int age;
	string name,address;
	cout<<"enter address:"<<endl;
	getline(cin,  address);
	cout<<"enter name:"<<endl;
	getline(cin, name);
		cout<<"enter age:"<<endl;
	cin>>age;

	
	cout<<"my name is "<<name<<endl<<"my age is "<<age<<endl<<"my home address is "<<address;
	
}
int main(){
	display();
	return 0;
}
