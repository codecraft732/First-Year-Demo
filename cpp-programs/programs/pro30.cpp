#include<iostream>
using namespace std;
int tfee(int ts,int tf){
cout<<"enter total student ";
cin>>ts;
cout<<"enter total fee";
cin>>tf;
    int t_collected_fee=ts*tf;
    return t_collected_fee;
} 
int main(){
    int ts,tf;
cout<<tfee(ts, tf);

     return 0;
    
}