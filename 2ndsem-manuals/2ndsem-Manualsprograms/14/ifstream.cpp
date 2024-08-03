#include<iostream>
#include<fstream>
using namespace std;   
int main(){
    string mydata;
    ifstream file2;
    
    file2.open("read.txt");
    //file2>>mydata;//output is just "hey";
    while(file2.eof()==0){
     getline(file2, mydata);
      cout<<mydata<<endl;
      }//output is first line read;
      // getline(file2, mydata);
      // getline(file2, mydata);
    
    
   
    file2.close();
     return 0;
    
}