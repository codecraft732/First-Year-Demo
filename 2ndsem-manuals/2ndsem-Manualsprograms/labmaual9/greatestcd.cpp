#include<iostream>
using namespace std;
    int gcd(int a,int b){
        while (b != 0){
        int temp=b;
        b=a % b;
        a=temp;
        }
        return a;
    }
    
    
int main(){
    int n1,n2;
    cout<<"enter the value of n1 and n2";
    cin>>n1>>n2;
     
    

     cout<<"the greatest common divisor of "<<n1<<" And "<<n2<<" is "<< gcd(n1, n2);
     return 0;
    
}