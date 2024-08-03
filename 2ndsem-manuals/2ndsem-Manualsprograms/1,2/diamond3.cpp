#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=3;i++){
     for(int j=3;j>=i;j--){
    cout<<" ";}
 for(int k=1;k<=i*2-1;k++){
    cout<<"*";
                    
    }
 cout<<endl;
    }

    for(int i=1;i<=3;i++){
    for(int j=0;j<=i;j++){
 cout<<" ";
  }
  for(int k=3;k>=i*2-1;k--){
 cout<<"*";
 }
  cout<<endl;
 }
      return 0;
}