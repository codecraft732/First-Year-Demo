#include<iostream>
using namespace std;
int spa(){
	int num1,num2,num3,num4,sum,product,average;
	cout<<"enter the value of n1,n2,n3,n4:\n";
	cin>>num1>>num2>>num3>>num4;
	sum=num1+num2+num3+num4;
	product=num1*num2*num3*num4;
	average=(sum)/4;
	cout<<"sum is "<<sum<<endl<<"product is "<<product<<endl<<"average is "<<average<<endl;
	return sum,product,average;
	
}
int main(){
   spa();
	return 0;
}
