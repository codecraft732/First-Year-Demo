#include<iostream>
using namespace std;
int main(){
	int marks ;
	
	cout<<"enter marks:";
	cin>>marks;
	int grade;
//exception handling
	if(marks>100 || marks<0)
	cout<<"invalid";
//exception handling
	
	else if(marks >90 )
	cout<<"grade a+ ";
		else if(marks >80&&marks <=90 )
	cout<<"grade a ";
		else if(marks >70&&marks <=80 )
	cout<<"grade b ";
		else if(marks >60&&marks <=70 )
	cout<<"grade c ";
	else if(marks <=60 )
	cout<<"fail";

	
	return 0;
}
