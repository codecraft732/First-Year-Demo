#include<iostream>
using namespace std;
  int sum(int a,int b) {
    return a+b;
  } 
   int sub(int a,int b) {
    return a-b;
  } 
int main(){
    int a,b;
    cout<<"enter the value of a and b:";
    cin>>a>>b;
    sum(a, b);
    sub(a, b);
  int  y=sum(a, b)+sub(a, b);
     
cout<<"vlaue of y is "<<y;
     return 0;
}