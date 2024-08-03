#include<iostream>
using namespace std;
float aot(){
float base,height,area_of_triangle;
	cout<<"enter the value of base:";
	cin>>base;
	cout<<"enter the value of height :";
	cin>>height;
	
	float area=0.5*base*height;
	cout<<"the area_of_triangle is "<<area;
	return area_of_triangle;
	
}
int main(){
	aot();
	return 0;
}
