#include<iostream>
using namespace std;
int main(){
    int y=8,x=5; 
    int *ptrx = &x;
    int *ptry = &y;
     cout<<"x "<<x<<"is the address of "<<ptrx;
      cout<<"y "<<*ptry<<"is the address of "<<&y;
     return 0;
    
}