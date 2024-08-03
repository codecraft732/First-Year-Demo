#include<iostream>
using namespace std;
int reverse(int n){
   int a,b,c, d;
   a=n/10000;
    n=n%10000;
   b=n/1000;
   n=n%1000;
   c=n/100;
   n=n%100;
    d=n/10;
   n=n%10;
   cout<<"n 5 digit number of reverse value is "<<n<<d<<c<<b<<a;
   return n,a,b,c,d;
   
 } 
int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
     reverse(n);
     
     return 0;
    
}