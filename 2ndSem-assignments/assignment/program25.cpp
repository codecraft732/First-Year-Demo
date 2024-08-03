#include<iostream>
using namespace std;
int main(){
	int totalhours,weeks ,days ,remaininghour;
	cout<<"enter hours"<<endl;
	cin>>totalhours;
	
	//week
	weeks=totalhours/168;
	//1week=7days;1day =24h;24*7=168
int	remaininghourafterweek=totalhours%168;

   //days
   days=remaininghourafterweek/24;
   remaininghour=remaininghourafterweek%24;
   
   cout<<"weeks"<<weeks<<endl;
   cout<<"days"<<days<<endl;
   cout<<"remaininghour"<<remaininghour<<endl;
   return 0;
   
   
   
}
