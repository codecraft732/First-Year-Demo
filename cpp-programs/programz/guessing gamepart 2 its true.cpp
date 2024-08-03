#include<iostream>
using namespace std;
int main(){
	int secretnum=1;
	int guess;
	int guesscount =0;
	int guesslimit =4;
	bool outofguesses=false;
	
	while(secretnum != guess && !outofguesses){
		if(guesscount < guesslimit){
			cout<<"enter guess:";
			cin>>guess;
			guesscount++;
		}else{
			outofguesses = true;
			
		}
	}
	{
			if(outofguesses){
			cout<<"u lose the game";
			
		}else{
			cout<<"u win the game";
		}
	}
	return 0;
}
