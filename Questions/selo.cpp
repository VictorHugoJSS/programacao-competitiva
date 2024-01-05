// Sphere Online Judge
// Question: SELOS11 - Selos
// Student: Victor Hugo José Sales da Silva
#include <bits/stdc++.h>

using namespace std;
typedef long long int llu;

int main(){
	llu selos;

	cin >> selos;

	if ((selos % 2 == 0) && (selos / 2 != 1)){
		cout << "S\n";
	}
	else{
		cout << "N\n";
	}

	return 0;
}
