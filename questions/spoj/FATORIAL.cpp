#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

vector<int> memo(1e6+1, -1);

void fat(){
	ll n = 1;
	
	for (int i = 2; i <= 1000000; i++){
		ll x = n * i;
		
		while (x % 10 == 0){
			x /= 10;
		}
		
		x = x % 1000000;
		memo[i] = x;
		n = x;
	}
}

int main(){
	memo[1] = 1;
	ll n;
	int i = 1;
	fat();
	
	while (cin >> n){
		cout << "Instancia " << i++ << "\n";
		cout << memo[n]%10 << "\n";
	}
	
	return 0;
}
