#include<iostream>
using namespace std;
void sayhi(string name,int age);/*{
	cout<<"hello user "<<name<< " u are "<<age<<endl;
}*/
int main()
{   cout<<"top"<<endl;
   	sayhi("alishba",40);
   	sayhi("ali",30);
   cout<<"bottom";
	return 0;
	
}
void sayhi(string name,int age){
	cout<<"hello user "<<name<< " u are "<<age<<endl;
}
