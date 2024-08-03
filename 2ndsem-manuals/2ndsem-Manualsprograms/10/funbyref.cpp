#include<iostream>
using namespace std;
void twice(int &n){
        n*=2;
}  
void div(int &n){
        n/=3;
}
void cal(int &x,int &y, int &z){
    x=5*x+7;
    y=2*x-3;
    z=5*x+2*x;
}
int main(){
    int x,y,z;
    cout<<"enter number:";
    cin>>x;

    twice(x);
     div(x);
     cal(x,y,z);
     
     cout<<" x after opration "<<x<<endl;
     cout<<" y after opration "<<y<<endl;
     cout<<" z after opration "<<z<<endl;
     return 0;
    
}