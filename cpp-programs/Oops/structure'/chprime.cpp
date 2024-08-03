#include<iostream>
using namespace std;
int chprime(int n){
	for(int i=2;i*i<=n;i++){
		if(i%n==0){
		return false;}	
		}
	return true;
}
int main(){
	int num;
	cin>>num;
	if(chprime(num)){
		cout<<num<<" is a prime";
	}else{
			cout<<num<<" is not a prime";
	}
	return 0;
}
