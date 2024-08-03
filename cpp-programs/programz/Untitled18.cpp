#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=4;i++){
		for(int j=4;j>=4-i;j--){
			cout<<" ";
		}for(int k=1;k<=(4*i);k++){
		cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
