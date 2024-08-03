#include<iostream>
using namespace std;
int main()
{
	string input;
	cout<<"enter a string:";
	getline(cin,input );
	int vowelcount=0;
	for(char c;input){
		if((c)=='a'||(c)=='e'||	(c)=='i'||(c)=='o'||(c)=='u'){
	vowelcount++;
		}
		
		}
		cout<<"number of vowels in string:"<<vowelcount<<endl;
		return 0;
	}
	

