#include<iostream>
using namespace std;
class Student{
	public:
	string name;
	string major;
	float gpa;
	Student(string n,string m,float g){
		name=n;
		major=m;
		gpa=g;
	}
	bool has_honors(){
		if(gpa>=3.5){
		return	true;
		}else{
		return false;
       }
	}
};
int main(){
	Student student1("ali","bba",3.4);
	Student student2("ahmad","mba",2.5);
	Student student3("alishba","se",3.8);
	cout<<student2.major;
//	cout<<student3.has_honors();
	return 0;
}
