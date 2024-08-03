#include<iostream>
using namespace std;
int main(){
    int n=1;
    int sum=0;
    while(n<=50){
        cout<<n*2-1<<endl;
        sum+=n*2-1;
        n++;
    }
    cout<<sum;
    return 0;
}
/*  int num=1;
     int sum=0;
    while(num<=100)
    {
        if(num%2!=0){
        
       
        sum+=num;}
        num++;
    }
    cout<<sum;
     return 0;
}*/