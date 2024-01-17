// Sphere Online Judge
// Question: SELOS11 - Selos
// Student: Victor Hugo José Sales da Silva
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int prime(ll number){
	ll divisions = 0;

	if (number == 1 || number == 0) { return 0; }

	for (ll i = 2; i <= sqrt(number) ; i++){
		if (number % i == 0){ return 1; }
	}

	return 0;
}

int main(){
	ll selos;

	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> selos;

	if (prime(selos)){
		cout << "S\n";
	}
	else{
		cout << "N\n";
	}
	return 0;
}
