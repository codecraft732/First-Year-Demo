#include<iostream>
using namespace std;
bool cp(int n){
if(n<=1){
    return false;
}for(int i=2;i*i<=n;i++){
    if(n%i==0){
        return false;
    
    }}{
        return true;
    }
}
int main(){
int n;
cin>>n;
if (cp(n)){
   cout<<n<<"is a prime";
  
}else{
    cout<<"not a prime";
 
}
     return 0;
}