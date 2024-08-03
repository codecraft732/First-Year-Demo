#include<iostream>
using namespace std;
class Book{
public:
     string author;
	string  title;
int pgs;
/*Book(){
	title= "no title";
	author="no author";
	pgs=0;
	
}*/
Book(string t,string a,int p){
	    title=t;
		author=a;
		pgs=p;
}
};
int main(){
	
	Book book1("harry potter","jack ma",200);
	Book book2("royalroyce","warrenbeffet",303);
	Book book3("Think and grow rich","mark zakerberg",245);
	Book book4("Rollin","kimtae",309);
	Book book5("subtitle of art ","junkkook",202);
	cout<<book2.title<<endl<<book2.author<<endl<<book2.pgs;

	return 0;
}
