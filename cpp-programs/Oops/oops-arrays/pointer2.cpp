#include<iostream>
using namespace std;
int main(){
    int x=5; 
    int *px = &x;
    int **ptr = &px;
     cout<<"x "<<x<<" is the address of  "<<px;
      cout<<"px "<<**ptr<<" is the address of "<<&px;
     return 0;
    
}