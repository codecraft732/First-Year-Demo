#include<iostream>
using namespace std;
class Car{
	private:
		string modle;
		float speed;
		int price;
		string color;
		public:
		void setspeed(int s){
			speed=s;
		}
	float getspeed(){
			return speed;
		}
		Car(string m,float s,int p,string c){
		
		modle=m;
		speed=s;
		price=p;
		color=c;}
	//	void car_run(float distance){
			
		
};
int main(){
float speed;
    Car toyota=Car("t1",34,1000,"red");
   float changespeed;
    cin>>changespeed;
    
    
     toyota.setspeed(changespeed);
    cout<<toyota.getspeed();
	return 0;
}
