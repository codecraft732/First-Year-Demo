#include<iostream>
template<classT>
using namespace std;
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
    calculate(T n1,T n2){
        a=n1;
        b=n2;
    }

}
int main(){
    Calculate<int> c1=Calculate<int> (2, 3);
    cout<<c1.add();
     
     return 0;
}

