#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter n";
  cin>>n;
    int firstarr[n],secondarr[n];
    for(int i=0;i<=n;i++){
        cin>>firstarr[i];
    }
     for(int i=0;i<=n;i++){
        secondarr[i]=firstarr[i];
    }
     for(int i=0;i<=n;i++){
        cout<<secondarr[i]<<" ";
    }
     return 0;
}