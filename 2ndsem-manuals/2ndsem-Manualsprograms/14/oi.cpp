#include<iostream>
#include<fstream>
using namespace std; 
int main(){
  /* ofstream file("integers.txt");
for(int i=6;i<=10;i++){
    file<<i<<endl;
    cout<<i<<endl;
}
file.close();*/
   /*
 file<<"8"<<endl;
 file<<"2"<<endl;
 file<<"3"<<endl;
 file<<"4"<<endl;
 file<<"5"<<endl;*/
    
     
 int a;
     ifstream file("integers.txt");
   while(file>>a){
    if(a%2==0){
        cout<<a<<endl;
    }
   }
    
}