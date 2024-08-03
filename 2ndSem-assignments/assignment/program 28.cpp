#include<iostream>
using namespace std;
void display(){
	char my_char;
	cout<<"enter a my_char:";
	cin>>my_char;
    cout<<(char)(my_char+1);
	cout<<(char)(my_char+2);
    
}
int main(){
	display(); 
	return 0;
}
