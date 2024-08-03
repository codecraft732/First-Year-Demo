#include<iostream>
using namespace std;
int main(){
	int gas ,elec,pet;
	cin>>gas;
	cin>>elec;
	cin>>pet;
	
 	int inc_percent=0.15+1;
 	int newgas=gas*inc_percent;
 
 	int	newelec=elec*inc_percent;
 		int	newpet=pet*inc_percent;
 			
 	cout<<"newrate ofelec"<<newelec<<endl;
 	cout<<"newrate ofgas"<<newgas<<endl;
 	cout<<"newrate ofpet"<<newpet<<endl;
	return 0; 		
}
