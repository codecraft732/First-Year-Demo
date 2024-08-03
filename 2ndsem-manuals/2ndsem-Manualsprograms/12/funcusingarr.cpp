#include<iostream>
using namespace std;
void reverse(int firstarr[10],int secondarr[10]){
    for(int i=0;i<=9;i++){
        cin>>firstarr[i];
    }
     for(int i=9;i>=0;i--){
        secondarr[9-i]=firstarr[i];
    }
     for(int i=0;i<=9;i++){
        cout<<secondarr[i]<<" ";
    }
    
}

int main(){
    int firstarr[10], secondarr[10];
    reverse(firstarr,secondarr);
     return 0; 
}