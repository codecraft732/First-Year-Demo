#include<iostream>
using namespace std;
int convert(){
	int seconds,time,min,hour,remaining_second;
   cout<<"enter seconds:";
   cin>>seconds;
   
   hour=seconds/3600;
   remaining_second=seconds%3600;
  min=   remaining_second/60;
seconds=remaining_second%60;   
   
   cout<<"seconds convert in hour is "<<hour<<endl;	
    cout<<"seconds convert in remaining_second is "<<remaining_second<<endl;	
     cout<<"seconds convert in min is "<<min<<endl;	
   return min,remaining_second,hour;
   
}
int main(){
	convert();
	return 0;
}
