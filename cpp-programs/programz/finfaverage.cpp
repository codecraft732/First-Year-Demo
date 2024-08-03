#include<iostream>
//#include<conio.h>
using namespace std;
int main(){
	int sum, n;
	cout<<"enter n numbers:";
	cin>>n;

	for(int i=1;i<=n;i++){
		int n;
		cin>>n;
		sum=sum+n;
	
	}
	int average=sum/n;
	
cout<<average;
	return 0;
}
