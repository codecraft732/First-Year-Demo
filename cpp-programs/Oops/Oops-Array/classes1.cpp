#include<iostream>
using namespace std;
class car{
	public:
	string modle;
	string color;
	int price;
	int speed;
	
	car(int p,int s,string m,string c){
		modle=m;
		color=c;
		speed=s;
		price=p;
	}
	
	
	
};
int main(){
	car toyota=car(500,90,"t1","white");
	cout<<toyota.color;
	return 0;
	
}

