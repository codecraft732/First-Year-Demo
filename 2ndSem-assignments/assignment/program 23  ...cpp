#include<iostream>
using namespace std;
int main(){
	int even,odd;
	cout<<"enter even number:";
	cin>>even;
	cout<<"enter odd number:";
	cin>>odd;
	 even=even*5;
	 odd=odd*3;
	int total=even+odd;
	int difference =5000-total;
	
	
	if( even % 2 == 0  &&  odd % 2!= 0){
	
		cout<<"difference"<<difference<<endl;
	}
	return 0;
}
