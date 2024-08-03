#include<iostream>
using namespace std;  
int main(){
   int n1,n2;
   cout<<"enter number of n1,n2:";
   cin>>n1>>n2;

   for(int i=n1;i<=n2;i++){
    for(int j=1;j<=10;j++){
        cout<<i<<"*"<<j<<"="<<i*j<<endl;
    }
    cout<<endl;
   }
      return 0;
}