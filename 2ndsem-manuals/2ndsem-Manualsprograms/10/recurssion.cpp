#include<iostream>
using namespace std;
 void pnaturalnum(int s,int n){
    if(s>n){
         return;}
      cout<<s<<" ";
    pnaturalnum(s+1,n);
 }   
int main(){
    int s,n;
    cout<<"enter n";
    cin>>n;
    cout<<"enter s";
    cin>>s;
    cout<<"all natural number from" <<s << "to "<<n<<" are ";
    pnaturalnum(s,n);
    
     return 0;
}