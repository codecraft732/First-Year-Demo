#include<iostream>
using namespace std;   
int main(){
    int n;
    float sum=0;
    cout<<"enter n number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        double num;
        cout<<"enter nums:";
        cin>>num;
        sum+=n;
    }
    int avr=sum/n;
    cout<<"average is "<<avr;
     return 0;
}