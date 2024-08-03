#include<iostream>
using namespace std;
   void display(){
    cout<<"***welcome to calculator program***"<<endl;
   } 
    void menu(int a,int b){
        int op;
         
        cout<<"**main menu**"<<endl;
        cout<<"1- option 1"<<" sum"<<endl;
        cout<<"2- option 2"<<" sub"<<endl;
        cout<<"3- option 3"<<" mul"<<endl;
        cout<<"4- option 4"<<" div"<<endl;
        cout<<"5- exit"<<endl;
         cout<<"choose option :";
     cin>>op;
        switch(op){
            case 1:
            cout<<"a+b is "<<a+b;
            break;
              case 2:
            cout<<"a-b is "<<a-b;
            break;
              case 3:
            cout<<"a*b is "<<a*b;
            break;
              case 4:
            cout<<"a/b is "<<a/b;
            break;
              default:
            cout<<"invalid";
            break;
        }
    }
int main(){
   int a,b;
     display();
     cout<<"enter the value of a:";
     cin>>a;
       cout<<"enter the value of b:";
     cin>>b;
     menu(a, b);
     
     
     
     return 0;
    
}