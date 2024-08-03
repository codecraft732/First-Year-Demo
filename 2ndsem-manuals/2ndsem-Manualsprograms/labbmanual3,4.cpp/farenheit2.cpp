#include<iostream>
using namespace std;

int main(){
   
    int farenheit;
    cout<<"enter temperature:";
    cin>>farenheit;
 int celcius=(farenheit-32)*5/9;
cout<<"celcius temp is  "<<celcius<<endl;
   if (celcius==25)
    cout<<"normal";
   
   else if (celcius < 25)
    cout<<"low";
   
    else if (celcius > 25)
    cout<<"high";
   
     return 0;
}