#include<iostream>
using namespace std;
void itc(){
	int height_inches,centimeter;
	cout<<"enter persons height in inches:";
	cin>>height_inches;
	
	centimeter=height_inches*2.54;
	cout<<"the persons height inches to centimeter is "<<centimeter<<"cm";
	}
	int main(){
		itc();
		return 0;
	}
