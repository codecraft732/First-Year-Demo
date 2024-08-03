#include<iostream>
using namespace std; 
float areaof_triangle(float base,float height){
return 0.5*base*height;
}
float paremeter_of_triangle(float a,float b,float c ){
    return a+b+c;
}
float area_of_rectangle(float width,float height ){
   return width*height;
}
float paremeter_of_rectangle(float a,float b){
   return 2*a+b;
}
int main(){
    float base,height,a,b,c,w,h2,a2,b2;
    cout<<"enter height or base:"<<endl;
    cin>>height;
    cin>>base;
       
    cout<<"enter a,b,c:"<<endl;
    cin>>a>>b>>c;
 
    cout<<"enter w:";
    cin>>w;
       
       
     cout<<"area of triangle is: "<<endl<<areaof_triangle(base, height)<<endl;
         cout<<"parimeter of triangle is :"<<endl<<paremeter_of_triangle(a,b,c)<<endl;
    cout<<"enter paremeter of rectangle:"<<endl<<paremeter_of_rectangle(a2,b2)<<endl;
       return 0;
}