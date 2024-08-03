#include<iostream>
using namespace std;
void ftc(int farenheit) {
   // int farenheit;
    cout<<(farenheit-32)*5/9;
} 
int main(){
    int temp;
    cout<<"enter temperature:";
    cin>>temp;
    cout<<"temp in farenheit to celcius is :";
    ftc(temp);
     return 0;
    
}