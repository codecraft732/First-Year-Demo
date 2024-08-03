#include<iostream>
using namespace std;   
int main(){
        int num;
        cout<<"enter a number:";  
        cin>>num;
    if(num %2 == 0){
        cout<<num<<" is even numbr";
    }else if(num %2 !=0){
        cout<<num<<" is odd numbr";
    } else{
        cout<<"error";
    }
     
     return 0;
    
}