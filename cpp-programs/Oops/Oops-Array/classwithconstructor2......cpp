#include<iostream>
using namespace std;
class Book{
	public:
	string title;
	string author;
	int pgs;
/*Book(){
	cout<<"creating object";
}*/
	Book(string author){
		cout<<author<<endl;}
//this means two objects use in same class;
//one is book1 and 2nd is book2 ;book is our class;
	
 
};
int main()
{

 Book book1("harry potter");
 book1.title="harry potter";
 book1.author="jeck ma";
 book1.pgs=34;
 
 Book book2("billgates");
 book2.title="billgates";
 book2.author="royal royce";
 book2.pgs=202;
 
 
 return 0;
}
