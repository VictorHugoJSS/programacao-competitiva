#include <bits/stdc++.h>

using namespace std;

int prime(long long number){
	long long divisions = 0;

	if (number == 1 || number == 0) { return 0; }

	for (long long int i = 2; i <= sqrt(number) ; i++){
		if (number % i == 0){ return 1; }
	}

	return 0;
}

int main(){
	long long selos;

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
