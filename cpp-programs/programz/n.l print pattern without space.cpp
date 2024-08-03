#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=7;i++){
		for(int j=7;j>=i;j--){
			cout<<" ";
		}for(int k=1;k<=i;i++){
		if(i*2-1)
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
