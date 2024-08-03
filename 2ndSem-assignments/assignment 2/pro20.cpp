#include<iostream>
using namespace std;
    void vf(int vi,int acc,int t){
        int vf;
        vf=vi+(acc*t);
        cout<<vf;
    }
int main(){
    int vi,t,acc;
    cout<<"enter initial velocity:";
    cin>>vi;
    cout<<"enter acceleration:";
    cin>>acc;
     cout<<"enter time:";
    cin>>t;
    vf(vi, acc, t);
     return 0;
    
}