#include<iostream>
using namespace std;
int main(){
    int n;
    int factorial=1;
    cout<<"enter value of n:";
    cin>>n;
    for(int i=n;i>=factorial;i--){
      int fact=factorial*i;
        cout<<fact;
    }
    
     return 0;
}