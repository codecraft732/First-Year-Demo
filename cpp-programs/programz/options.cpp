#include<iostream>
using namespace std;
int main(){
	int choice,option1,option2,option3,option4;
	

	do{
	cout<<"1 option1"<<endl;
	cout<<"2 option2"<<endl;
	cout<<"3 option3"<<endl;
	cout<<"4 exit "<<endl;
	cout<<"enter your choice:";
	cin>>choice;
	
	switch (choice){
	case1:
	 cout<<"option 1";
	break;
	case2:
	cout<<"option 2";
	break;
	case3:
	 cout<<"option 3";
	break;
	case4:
	cout<<"exit back byee";
	break;
//	default:
	//	cout<<"error";
	//	break;
		
	}
}
	while(choice!=4);
return 0;
}
