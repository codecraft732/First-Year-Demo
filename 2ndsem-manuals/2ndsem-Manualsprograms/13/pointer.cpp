#include<iostream>
using namespace std;
int main(){
    int n=10;
    int *ptr;
    ptr=&n;
    cout<<"address of num = :"<<&n<<endl;
    cout<<"value of num = :"<<n<<endl;
    cout<<"address of ptr = :"<<&ptr<<endl;
    cout<<"value of ptr = :"<<ptr<<endl;
    cout<<"value pointed by ptr = :"<<*ptr<<endl;
    return 0;
}