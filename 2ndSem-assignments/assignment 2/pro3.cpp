#include<iostream>
using namespace std;
void display(int age, string name, string address){
   cout<<"my age is "<<age<<endl;
    cout<<"my name is "<<name<<endl;
    cout<<"my address is "<<address<<endl;
}
int main(){
int age;
string name;
string address;
 cin>>age;
  getline(cin,name);
   getline(cin,address);

   display(age, name, address);

     return 0; 
}