#include<iostream>
using namespace std; 
int main(){
    int arr[5]={9,8,5,3,2};
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<endl;
    }
    if(arr[0]==9){
        cout<<"index 0is a max";
    }else{
        cout<<"its not a max";
    }
      return 0;
}