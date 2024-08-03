#include<iostream>
using namespace std;
class Car{

	protected:
		string modle;
		int price ;
		float speed;
		string color;
	public:	
	Car(string m,int p,float s,string c){
			modle=m;
			price =p;
			speed=s;
			color=c;
		}
		~Car(){
			cout<<"distructor invoked for class car"<<endl;
		}
//	virtual	
void car_run(float distance){
			cout<<modle<<" will take "<<distance/speed<<"  hours to cover "<<distance<<"km"<<endl;
		}
};
class Electric_car:Car{
	public:
	 int batterymh;
	Electric_car(string m,int p,float s,string c,int bm):Car(m,p,s,c){
			modle=m;
			price =p;
			speed=s;
			color=c;
			batterymh=bm;
	}
		~Electric_car(){
			cout<<"distructor invoked for class electric_car"<<endl;
		}
	virtual void car_run(float distance){
		cout<<modle<<" electric car will take "<<distance/speed<<" hours to cover "<<distance<<"km"<<endl;
		}
};
int main(){
	Car toyota=Car("t1",450,34,"red");
	Car bmw=Car("b1",500,23,"white");
	
	Electric_car tesla=Electric_car("t1",2000,57,"black",2500);
  Electric_car *ptesla=&tesla;
  	ptesla->car_run(58);
bmw.car_run(340);
	return 0;
}
