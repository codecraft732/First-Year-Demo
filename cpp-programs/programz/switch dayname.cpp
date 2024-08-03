#include<iostream>
using namespace std;
string getdayofweek(int daynum){

string dayweek;

switch (daynum){
    case 1:
	dayweek="sunday";
	break;
	case 2:
	dayweek="monday";
	break;
	case 3:
	dayweek="teusday";
	break;
	case 4:
	dayweek="wednesday";
	break;
	case 5:
	dayweek="thursday";
	break;
	case 6:
	dayweek="friday";
	break;
	case 7:
	dayweek="saturday";
	break;
	default:
	dayweek="invalid!";
		return dayweek;
}
}

int main()
{
	cout<<getdayofweek(9)<<endl;
	return 0;	
}
