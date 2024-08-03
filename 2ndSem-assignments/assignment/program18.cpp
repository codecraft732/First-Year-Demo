#include<iostream>
using namespace std;
void area(){
	int radius,area;
	cout<<"enter radius:";
	cin>>radius;
	
	area=3.14*radius*radius;
cout<<"area is "<<area<<endl;
	
}
void circumference_of_circle(){
	int radius,circumference_of_circle;
	cout<<"enter radius:";
	cin>>radius;
	
circumference_of_circle=2*3.14*radius;
	cout<<"circumference_of_circle is "<<circumference_of_circle<<endl;}
int main(){
	area();
	circumference_of_circle();
	return 0;
}
