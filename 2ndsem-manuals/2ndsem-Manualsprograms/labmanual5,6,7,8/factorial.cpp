#include<iostream>
using namespace std; 
int main(){
    int num;
    int factorial=1;
cout<<"enter num";
cin>>num;
    for(int i=1;i<=num;i++){
        factorial*=i;
    }
      cout<<"factorial is "<<factorial;
     
     return 0;
    
}