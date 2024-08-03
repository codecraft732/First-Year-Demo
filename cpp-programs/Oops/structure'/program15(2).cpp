#include<iostream>
using namespace std;
int fmax(int arr[],int size){
     int max=arr[0];
for(int i=1;i<=size;i++){
     if(arr[i]>max){
          max=arr[i];
     }
}
return max;
}
int main(){
    
    int arr[]={2,3,5,8,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max=fmax(arr,size);
    cout<<max;
     
     
     return 0;
}
