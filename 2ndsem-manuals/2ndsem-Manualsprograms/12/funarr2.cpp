#include<iostream>
using namespace std;
void reverse(int s,int arr[],int arr2[]){
    for(int i=0;i<=s;i++){
    cin>>arr[i];
    }
      cout<<endl;
     for(int i=0;i<=s;i++){
    cin>>arr2[i];
    }}
    void reverse2(int arr[],int arr2[],int s){
  for(int i=0;i<=s;i++){
    int temp=arr[i];
    arr[i]=arr2[i];
    arr2[i]=temp;
  } 
}
    
    
int main(){
    
    int s;
    cout<<"enter size";
    cin>>s;
    int arr[s],arr2[s];
    reverse(s,arr, arr2);

     cout<<"\naffter swapping: ";
     reverse2(arr, arr2, s);
     cout<<"arr[i] is:";
     for(int i=0;i<=s;i++){
     cout<<arr[i]<<" ";
    }
      cout<<"\narr2[i] is"<<" ";
     for(int i=0;i<=s;i++){
     cout<<arr2[i]<<" ";
    }
     return 0;
    
}