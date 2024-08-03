#include<iostream>
using namespace std;
int display(int age,char ch){
	cin>>age>>ch;
	cout<<"your age is "<<age;
	cout<<"your character is "<<ch;
	return age,ch;
}
int main(){
	int age,ch;
	display(age, ch);
	return 0;
}
