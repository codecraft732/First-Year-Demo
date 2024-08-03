#include<iostream>
using namespace std;
string weekname(int daynum){
	if(daynum == 0){
cout<<"sunday";
	}else if(daynum==1){
		cout<<"monday";
	}else if(daynum==2){
		cout<<"teusday";
	}else if(daynum==3){
		cout<<"wednessday";
	}else if(daynum==4){
		cout<<"thursday";
	}else if(daynum==5){
		cout<<"friday";
	}else if(daynum==6){
		cout<<"saturday";
	}else{
		cout<<"invalid";
	}
	return 0;
}
int main(){
	cout<<weeknames(2);
	return 0;
}
