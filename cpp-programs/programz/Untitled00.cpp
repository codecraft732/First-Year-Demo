#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=5;i++){
		for(int j =5-i;j>0;j--){
			cout<<" ";
		}for(int r=1;r<=i;r++ )
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
