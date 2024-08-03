#include<iostream>
using namespace std;
void generates(){
    int num=100;
    for(int i=0;i<=2;i++){
        if(i==0){
            cout<<num;
        }
       else if(i==1){
    cout<<num+100;
        }else{
            cout<<num+99;
        }
        cout<<" ";
    }
}
int main(){
    generates();
 return 0;
}