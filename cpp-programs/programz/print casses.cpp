#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"enter ch:";
	cin>>ch;
	if(ch>='a' && ch<='z')
	cout<<"its lower case character";
	else if(ch>='A'&& ch<='Z')
	cout<<"its uppercase character";
	else if(ch>='1' && ch<='9')
	cout<<"its digit";
	else
	cout<<"its special character";
	
	
	return 0;
}
