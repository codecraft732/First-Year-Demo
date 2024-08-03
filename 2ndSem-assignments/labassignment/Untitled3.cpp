#include<iostream>
using namespace std;
int tripleByValue(int count) {
    return count*3;
}
void tripleByReference(int &count) {
    count*=3;
}
int main(){
    int count;
    cout<<"Enter a number: ";
    cin>>count;
  cout<<"Using tripleByValue: "<<tripleByValue(count)<<endl;
    tripleByReference(count);
   cout <<"Using tripleByReference:"<<count<<endl;
 return 0;
}
