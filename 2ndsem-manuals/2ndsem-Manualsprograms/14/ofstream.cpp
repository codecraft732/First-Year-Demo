#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file2;
    file2.open("writencontent.txt");
     file2<<"hello my name is alishba"<<endl;
     file2<<"i am 18 years old "<<endl;
     file2<<"currently i am pursuing my graduation "<<endl;
     cout<<"hello my name is alishba"<<endl;
     cout<<"i am 18 years old "<<endl;
     cout<<"currently i am pursuing my graduation "<<endl;
   
    file2.close();
     return 0;
    
}