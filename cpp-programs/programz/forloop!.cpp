#include<iostream>
using namespace std;
int main()
{    int n;
cout<<"enter average number of elements:";
	cin>>n;
	char i;

    for(i=0;i<n;i++)
    { cout<<"enter number"<<i+1<<":";
    cin>>n;
    int sum+=n;
	}
		cout<<"average:" <<sum/n<<endl;
	return 0;
}
