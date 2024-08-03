#include<iostream>
using namespace std;  
int main(){
    int vowelcount=0;
    string str;
    cout<<"enter a string :";
    cin>>str;
    for(int i=0;i<=str.length();i++){
        char ch=str[i];
          if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
     vowelcount++;
    }
    }
  cout<<vowelcount;
     return 0;
    
}