#include<iostream>
using namespace std;
class Movie{
	private:
		string rating;
		
	
		string title;
		string director;
	public:	
	Movie(string t,string d,string r ){
				title=t;
				director =d;
				rating =r;
			}
			
	void setrating(string r){
		rating=r;
				
			}
		string getrating(){
				return rating ;
			}
};
int main(){
	Movie avengers=Movie("harry","pona","pg-13");
	avengers.setrating("nr");
	cout<<avengers.getrating();
	
	return 0;
}
