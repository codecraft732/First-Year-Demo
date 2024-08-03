#include<iostream>
using namespace std;
struct student{
   string name;
   int rollno;
   float marks;

};
    
    
int main(){
  student s;
    s.name="alishba";
    s.rollno=23;
   s.marks=45;
     
     cout<<s.name <<endl;
      cout<<s.rollno<<endl;
       cout<<s.marks<<endl;
     return 0;
    
}