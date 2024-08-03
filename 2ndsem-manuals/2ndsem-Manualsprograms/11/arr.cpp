#include<iostream>
using namespace std;  
int main(){
   //int s=6;
  int  sum=0;
    int   num[6]={1,7,8,9,4,5};
     for(int i=0;i<=5;i++){
        cout<<num[i]<<" ";
        sum+=num[i];
     }
     cout<<endl;
     cout<<sum;
      return 0;
}