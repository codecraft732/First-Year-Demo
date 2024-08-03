#include<iostream>
using namespace std;
//#include<fstream>
class User{
	public:
		string name;
		void username(){
			cin>>name;
		}
};
int main(){
	User u[4];
//	ofstream file("username.text");
		int i=1;
	while(i<=4){
	cout<<"enter name: ";
	u[i].username();

//file
	cout<<u[i].name<<endl;
		i++;	
	}
	
	return 0;
}
