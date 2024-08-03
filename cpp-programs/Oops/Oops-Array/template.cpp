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
	T subtract(){
			return a-b;
		}
		Calculate(T n1,T n2){
			n1=a;
			n2=b;
		}
};
int main(){
	Calculate<int> c1=Calculate<int>(12,9);

c1.add();
cout<<c1.add();
	return 0;
}
