#include<iostream>
using namespace std;
float percent(){
float totalmarks,obtmarks;
cout<<"enter totalmarks :\n";
cin>>totalmarks;
cout<<"enter obtmarks :\n";
cin>>obtmarks;

float percentage=(obtmarks/totalmarks)*100;
cout<<"your percentage is "<<percentage<<"%";
return percentage;

}
int main(){
	percent();
	return 0;
}
