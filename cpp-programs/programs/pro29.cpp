#include<iostream>
using namespace std;
int Ptk(int P,int kg){
    kg=P*0.45;
    return P*0.45;
}
int main(){
    int P,kg;
    cout<<"enter pound";
    cin>>P;

    cout<<Ptk(P, 0.45);
     return 0;
    
}