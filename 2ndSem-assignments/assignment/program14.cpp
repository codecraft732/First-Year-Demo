#include<iostream>
using namespace std;
float time(){
float speed ,distance ,time;
	cout<<"enter the distance :";
	cin>>distance;
	cout<<"enter speed:";
	cin>>speed;
	
	time =distance/speed;
	cout<<time ;
	return time ;	
}
int main(){
	time();
return 0;	
}
