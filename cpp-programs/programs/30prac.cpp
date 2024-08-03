#include<iostream>
using namespace std;
int tfee(int ts,int tf){


    //int t_collected_fee=ts*tf;
    return ts*tf;
} 
int main(){
    int ts,tf;
    cout<<"enter total student ";
cin>>ts;
cout<<"enter total fee";
cin>>tf;
tfee(ts, tf);

     return 0;
    
}