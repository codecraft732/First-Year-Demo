#include<iostream>
using namespace std;
int main(){
	int salary,allow ,rent,sum;
	cout<<"enter salary";
	cin>>salary;
	
	allow=salary*0.35;
	rent=salary*0.25;
	sum=salary + rent +allow;
	cout<<sum;
	return 0;
}
