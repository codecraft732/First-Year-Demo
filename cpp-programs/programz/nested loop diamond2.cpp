#include<iostream>
using namespace std;
int main(){
	 for(int i=1;i<=7;i++){
	 	for(int j=7;j>=i+1;j--){
	 		cout<<" ";
		 }for(int k=1;k<=i;k++){
		 
		 cout<<"*";}
		 cout<<endl;
	 }
	 for(int i=1;i<=6;i++){
	 	for(int j=1;j<=i+1;j++){
		 
	 	cout<<" ";
	 }
	 for(int k=6;k>=i;k--)
	{
		cout<<"*";
	}
	cout<<endl;
}
	 return 0;
}
