#include<iostream>
using namespace std;
template<class T>
class Calculate{
    public:
    T a;
    T b;
    
    T add(){
        return a+b;
    }
    T sub(){
        return a-b;
    }
    Calculate(T n1,T n2){
        a=n1;
        b=n2;
    }

};
int main(){
    Calculate<float> c1=Calculate<float> (2.0, 3.6);
    cout<<c1.add();
     
     return 0;
}

