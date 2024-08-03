#include<iostream>
using namespace std;
int main(){

	string result;
	int casenum;
	cout<<"enter number 1 to 12 also monthnames(e.g1=january):";
	cin>>casenum;

	
	switch (casenum)
	{
		case 1:
	result="january";
			break;
		case 2:
		result="february";
		break;
		case 3:
		result="march";
		break;
		case 4:
		result="april";
		break;
		case 5:
		result="may";
		break;
		case 6:
			result="june";
			break;
				case 7:
			result="july";
			break;
				case 8:
			result="august";
			break;
				case 9:
			result="september";
			break;
				case 10:
			result="october";
			break;
				case 11:
			result="november";
			break;
				case 12:
			result="december";
			break;
		default:
				result="error";
				break;
				
	}
//cout<<"result:"
cout<<casenum<<"="<<result;
	return 0;
	}
	
