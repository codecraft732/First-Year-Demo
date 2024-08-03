#include<iostream>
using namespace std;
   void a_c(int radius){
    int area,circumference;
    area=3.14*radius *radius;
    circumference=2*3.14*radius;
    cout<<"area is "<<area<<"  circumference is "<<circumference;
    } 
int main(){
    int radius;
    cout<<"enter value of radius:";
    cin>>radius;
    a_c(radius);
     return 0;   
}