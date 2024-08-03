#include<iostream>
using namespace std;
int main()
{
	bool ismale= false;
	bool istall= false;
	if(ismale && !istall){
		cout<<"u are male but not tall";
	}else if(ismale && istall){
		cout<<"u are a tall male";
	}else if(!ismale && !istall)
	{
	cout<<"u are not a tall male";	
	}else{
		cout<<"u are a male but not tall";
	}
	return 0;

	}
