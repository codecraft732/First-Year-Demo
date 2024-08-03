#include<iostream>
using namespace std;
struct Book{
   string title;
   string author;
   int price;

};
    
    
int main(){
    Book mybook;
    mybook.title="subtitle of art";
    mybook.author=" harry potter";
    mybook.price=4500;
     
     cout<< mybook.title<<endl;
      cout<< mybook.author <<endl;
       cout<<mybook.price<<endl;
     return 0;
    
}