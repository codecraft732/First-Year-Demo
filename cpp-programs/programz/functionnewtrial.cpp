#include<iostream>
using namespace std;
int sum(){
	int a,b,sum;
	cout<<"enter value of a:\n";
	cin>>a;
	cout<<"enter value of b:\n";
	cin>>b;
	sum=a+b;
	return sum;
}
int main(){
//	int ans;
//	while(true){
	//	ans=sum();
		//cout<<ans<<endl<<"************"<<endl;
	cout<<sum();
	//if we write here sum(); then output we gave exception;	
//	}
	 return 0;
}
