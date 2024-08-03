#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=5;i++){

		for(int j=5;j>=i;j--){
		cout<<" ";
	}	for(int k=1;k<=i;k++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
		for(int l=4;l>=1;l--){

		for(int m=l-1;m<=l;m++){
		cout<<" ";
	}	for(int n=1;n<=l;n++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	return 0;
}
