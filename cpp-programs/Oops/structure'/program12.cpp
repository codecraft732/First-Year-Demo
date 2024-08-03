#include<iostream>
using namespace std;
 int ctf(double celcius){
  
return (celcius*9.0/5.0)+32.0;
 }
    
int main(){
  double ferenheit=ctf(25.0);
  cout<<ferenheit;
      return 0;
}