#include <iostream>

using namespace std;

int main(){
	int Participants, Budget, Hotels, Weeks;
	int min = 9999;

	cin >> Participants >> Budget >> Hotels >> Weeks; 

	for (int i = 0; i < Hotels; i++){
		int price, beds, diff = 0;

		cin >> price;

		for (int j = 0; j < Weeks; j++){

            cin >> beds;

			if ( beds < Participants ){
				continue;
			}
			diff = abs(Budget - (price * Participants));
		}

		if (diff < min){
			min = diff;
		}
	}

	if ( min > Budget ){
		cout << "stay home" << endl;
	}
	else{
		cout << min << endl;
	}
}
