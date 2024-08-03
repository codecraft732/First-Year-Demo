#include<iostream>
using namespace std; 
int main(){
   
   int evencount=0;
    int oddcount=0;
    int arr[12]={1,2,3,4,5,6,8,4,34,23,75,44};
    for(int i=0;i<=11;i++){
        cout<<arr[i]<<" ";
   
    if(arr[i]%2==0){
        evencount++;
    }else{
       oddcount++;
    }
    }

      cout<<" \n count even numbers is "<<evencount++<<endl;
      cout<<" count odd numbers is "<<oddcount++<<endl;
        
     return 0;
}