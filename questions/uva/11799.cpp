#include <bits/stdc++.h>

using namespace std;

int main(){
	int tc, i = 1;
	long long int n, temp;

	cin >> tc;

	while (tc--){
		long long int max = 0;
		cin >> n;

		for (int i = 0; i < n; i++){
			cin >> temp;
			max = temp > max ? temp : max;
		}

		printf("Case %d: %d\n", i++, max);
	}
	return 0;
}
