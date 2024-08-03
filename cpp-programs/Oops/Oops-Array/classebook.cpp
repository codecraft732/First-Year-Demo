#include<iostream>
using namespace std;
class Book{
	public:
	string title;
	string author;
	int pgs;
 
};
int main()
{
 Book book1;
 book1.title="harry potter";
 book1.author="jeck ma";
 book1.pgs=34;
 
 Book book2;
 book2.author="billgates";
 book2.title="royal royce";
 book2.pgs=202;
 
 cout<<book2.author;
 return 0;
}
