#include<iostream>
using namespace std;   
int main(){
   int n1,n2,n3;
   cout<<"enter number:";
   cin>>n1>>n2>>n3;

    if(n1>=n2 && n1>=n3){
        cout<<n1<<"is a max number:";
    } else if(n2>=n1 && n2>=n3){
        cout<<n2<<"is a max number:";
    } else {
        cout<<n3<<"is a max number:";
    }
    
     return 0;
    
}