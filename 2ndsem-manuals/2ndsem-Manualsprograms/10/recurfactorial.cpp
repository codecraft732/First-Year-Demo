#include<iostream>
using namespace std;
    int factorial(int n){
       if(n<=1){
            return 1;
        }
       return n * factorial(n-1);
 }
int main(){
    int a;
    cout<<"enter n";
    cin>>a;
     cout<<"factorial of num is "<<factorial(a);
     return 0;
}