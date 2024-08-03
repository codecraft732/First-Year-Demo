#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=4;j>=i;j--){
            cout<<" ";}
            for(int k=1;k<=i;k++){
                    if(i%2 !=0){
                        cout<<"*"<<" ";
                    }
            }
            cout<<endl;
    }

      for(int i=1;i<=3;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
            }
            for(int k=3;k>=i;k--){
                    if(i%2 !=0){
                        cout<<"*"<<" ";
            }
            }
            cout<<endl;
            }
      return 0;
}