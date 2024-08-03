#include<iostream>
using namespace std;
class Car{
	public:
	string modle;
	float speed;
	float price;
	string color;

	Car(string m,float s,float p,string c){
		modle=m;
		speed=s;
		price=p;
		color=c;
	}
	void car_run(float distance){
		cout<<modle<<" will take "<<distance/speed<<" hours to cover "<<distance<<"km"<<endl;
		
	}
};
int main(){
	Car ferari("f1",34,345,"red");
	Car bmw("b1",23,343,"black");
	Car toyota("t1",21,789,"white");
	
float dis;
	while(true){
		cout<<"enter dis";
		cin>>dis;
		bmw.car_run(dis);
	ferari.car_run(dis);
	toyota.car_run(dis);
	}
	/*	bmw.car_run(300);
	ferari.car_run(370);
	toyota.car_run(200);*/
	return 0;
}
