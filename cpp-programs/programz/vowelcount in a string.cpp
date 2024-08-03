#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	int vowelcount=0;
	cout<<"enter a string";
	getline(cin,s);
	for(int i=0;i<=s.length();i++){
		char ch=(s[i]);
		if (ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u' )
			vowelcount++;
		
	
	}
		cout<<vowelcount<<endl;
	return 0;
}
