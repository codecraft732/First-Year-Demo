#include<iostream>
using namespace std;
    int area(float height,float width){
    	int area;
        cin>>height>>width;
        area=height*width;
        cout<<height*width;
        return area;
    }
int main(){
    float height,width;
    area(height, width);
     return 0;
    
}