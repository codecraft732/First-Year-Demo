#include<iostream>
using namespace std;
class Atm{
	private:
		string name;
		string password;
		public:
			double balance=0;
		Atm(string n,string p){
			name=n;
			password=p;
		}
	bool checkpass(string pass){
			if (pass==password){
				cout<<"correct pass";
			}else{
				cout<<"wrong pass";
			}
		}
		bool checkname(string nam){
			if (nam==name){
				cout<<"correct name";
			}else{
				cout<<"wrong name";
			}
		}
};
int Startmenu(){
	cout<<"*****main menu******";
	cout<<"1- balance"<<endl;
	cout<<"2- deposit"<<endl;
	cout<<"3- withdraw"<<endl;
	cout<<"4- exit"<<endl;
	
	cout<<"selection:";
	int option;
	cout<<"enter option";
	cin>>option;
	return option;
}
int main(){
	Atm u1=Atm("fahad","key34");
	cout<<"****welcom to atm application****";
	string n,p;
	cout<<"enter name:";
	cin>>n;
	cout<<"enter password:";
	cin>>p;
	if(u1.checkname(n)  &&  u1.checkpass(p))
	{
	
   int i;
	i=Startmenu();
	switch (i){
		case 1:
		cout<<"your current balance is "<<u1.balance;
		break;
		case 2:
		double dep;
		cout<<" enter deposit :";
		cin>>dep;
		u1.balance+=dep;
		break;
		case 3:
		double wd;
		cout<<" enter withdraw :";
		cin>>wd;
		
		if(wd >= u1.balance){
			cout<<"insufficient fund"<<endl;
		}else{
		u1.balance-=wd;
		}
		break;
		case 4:
		break;
					
	}
}
		cout<<"would you like to continue ";
		cout<<"1- yes";
		cout<<"2- no";
	int input;
	    cout<<"selection";
	    cout<<"enter input number:";
	    cin>>input;
	    
	   string gotostart;
	    if(input==1){
		
		system("cls"); gotostart;}

}
	

