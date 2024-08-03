#include<iostream>
using namespace std;
  void reverse(int n){
    int a,b;
    a=n/100;
    n=n%100;
    b=n/10;
    n=n%10;
    cout<<" n 3 digit number reverse is "<<n<<b<<a;
      }
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
reverse(n);
     return 0;
    
}