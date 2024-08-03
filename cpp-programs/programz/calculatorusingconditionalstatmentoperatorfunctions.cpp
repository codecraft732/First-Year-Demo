#include<iostream>
using namespace std;
float sum(float a,float b){
	return a+b;
float sub(float a,float b){
	return a-b;
}
float mul(float a,float b){
	return a*b;
}
float div(float a,float b){
	return a/b;
}
int main(){


     while(true){
	
	cout<<"welcome to calculator program:"<<endl<<endl;
	int a,b,ans;
	cout<<"enter value a:"<<endl;
	cin>>a;
	cout<<"enter value b:"<<endl;
	cin>>b;
	
	cout<<"enter a for add:s for sub:m for mul:d for div:"<<endl<<endl;
	char ch;
	cin>>ch;
	if(ch=='a')
	ans=sum(a,b);
	else if(ch=='s')
	ans=sub(a,b);
	else if(ch=='m')
	ans=mul(a,b);
	else if(ch=='d')
	ans=div(a,b);
	
	cout<<"press any key to continue or press 0 for quit"<<endl<<endl;
	
	if(ch=='0')
	break;	
      }  
	    
return 0;
}

