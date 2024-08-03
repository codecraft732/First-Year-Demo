#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int age;
    string name;
    cout<<"enter a name:";
    cin>>name;
    cout<<"enter your age:";
    cin>>age;
     ofstream file4("learn.txt");
    file4<<"my name is "<<name<<endl;
    file4<<"my age is "<<age<<endl;
     cout<<name<<age;
    
   return 0;

}
/*int main(){
    string name;
    int age;
    ofstream file4("read.txt");
     r();
    file4<<"my name is "<<name;
    file4<<"my age is "<<age;
     cout<<name<<age;
    
     return 0;
    
}*/