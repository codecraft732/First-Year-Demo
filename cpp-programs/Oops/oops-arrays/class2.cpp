#include<iostream>
using namespace std;
int main(){
	int arr[3][2]={{2,3},{4,5},{6,2}};
	for(int i=0;i<=2;i++){
		for(int j=0;j<=1;j++){
			cout<<arr[i][j];
		}
		cout<<endl;
	}
	
	return 0;
}