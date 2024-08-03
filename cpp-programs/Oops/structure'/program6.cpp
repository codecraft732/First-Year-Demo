#include<iostream>
using namespace std;
struct Complex{
    double real;
    double imaginary;
};
int main(){
    Complex c1,c2,sum;
    c1.real=12.3;
    c2.real=34.5;
     c1.imaginary=12.8;
    c2.imaginary=34.6;
    sum.real=c1.real+c2.real;
    sum.imaginary=c1.imaginary+c2.imaginary;
     
    cout<<sum.real<<"+"<<sum.imaginary<<"="<<sum.real+sum.imaginary;
     return 0;
}