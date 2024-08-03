#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=7;i++){
		for(int j=1;j<=i-1;j++){
			cout<<" ";
		}for(int k=i;k<=i*2-1;i++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
