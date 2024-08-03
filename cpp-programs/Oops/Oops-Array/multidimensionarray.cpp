#include<iostream>
using namespace std;
void ar(){
	int arr[4][5]={{8,0,9,7,6},{1,2,4,5,3},{1,1,3,4,5},{6,7,8,1,0}};
	//cout<<arr[3][4];
	//return 0;
		for(int i=0;i<=3;i++){
		for(int j=0;j<=4;j++ ){
			cout<<arr[i][j];
		}
		cout<<endl;
	}
}
int main(){
ar();
	return 0;
}
