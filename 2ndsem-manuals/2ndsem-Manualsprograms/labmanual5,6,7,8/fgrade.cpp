#include<iostream>
using namespace std;  
int main(){
    int a=0,b=0,c=0,d=0,e=0,f=0;
    char grade;
    cout<<"enter char grade(enter x to stop):"<<endl;
    while(cin>>grade&&grade!='x'){
switch(grade){
    case 'a':
  a++;
    break;
     case 'b':
    b++;
    break;
     case 'c':
   c++;
    break;
     case 'd':
   d++;
    break;
     case 'e':
   e++;
    break;
     case 'f':
   f++;
    break;
    default:
    cout<<"invalid";
break;
}
}
cout<<"grade distribution:";
cout<<"a:"<<a<<endl;
cout<<"b:"<<b<<endl;
cout<<"c:"<<c<<endl;
cout<<"d:"<<d<<endl;
cout<<"e:"<<e<<endl;
cout<<"f:"<<f<<endl;


       return 0; 
}