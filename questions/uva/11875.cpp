#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int tests, i = 1;

	cin >> tests;

	while (tests--){
		int team_members, t, cap;
		cin >> team_members;

		for (int i = 0; i < team_members; i++){
			cin >> t;
			if (i == (team_members/2)){
				cap = t;
			}
		}
		cout << "Case " << i++ << ": "<< cap << "\n";
	}

	return 0;
}