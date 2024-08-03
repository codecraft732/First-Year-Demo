#include<iostream>
using namespace std;
int main(){
	string i;
	for(int i=1;i<=5;i++){
		for(int j=5;j>=i-1;j-- ){
			cout<<" ";
		}for(int k=1;k<=i;k++){
		if(string i == "odd"){
			cout<<"*";
		}
		else(){
		cout<<"#";
		}
			
		}
		cout<<endl;
	}
	return 0;
}
